/*
 * XREFs of SepSecureBootCorrectBcd @ 0x140793ED4
 * Callers:
 *     NtFilterBootOption @ 0x140AD74D0 (NtFilterBootOption.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x14049E730 (HviIsAnyHypervisorPresent.c)
 *     HviGetHypervisorFeatures @ 0x1406623A0 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x140794274 (SepSecureBootUpdateBcdDataForRule.c)
 *     BcdOpenSystemStore @ 0x1408124F0 (BcdOpenSystemStore.c)
 *     BcdEnumerateObjects @ 0x14081265C (BcdEnumerateObjects.c)
 *     BcdOpenObject @ 0x1409A4724 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x1409A5C2C (BcdCloseObject.c)
 *     BcdCloseStore @ 0x140A81A08 (BcdCloseStore.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepSecureBootCorrectBcd(_BYTE *a1)
{
  char v1; // r13
  NTSTATUS updated; // ebx
  char *Pool2; // r15
  ULONG v4; // r12d
  unsigned int v5; // r14d
  HANDLE v6; // rdi
  __int64 v7; // r8
  int v8; // ecx
  int v9; // edx
  _BYTE v11[4]; // [rsp+30h] [rbp-40h] BYREF
  ULONG ObjectCount; // [rsp+34h] [rbp-3Ch] BYREF
  ULONG BufferSize; // [rsp+38h] [rbp-38h] BYREF
  HANDLE BcdStoreHandle; // [rsp+40h] [rbp-30h] BYREF
  HANDLE BcdObjectHandle; // [rsp+48h] [rbp-28h] BYREF
  _BYTE *v16; // [rsp+50h] [rbp-20h]
  _BCD_OBJECT_DESCRIPTION BcdEnumDescriptor[2]; // [rsp+58h] [rbp-18h] BYREF

  v16 = a1;
  BcdObjectHandle = 0LL;
  ObjectCount = 0;
  BufferSize = 0;
  BcdStoreHandle = 0LL;
  v11[0] = 0;
  *a1 = 0;
  if ( !HviIsAnyHypervisorPresent()
    || (*(_OWORD *)&BcdEnumDescriptor[0].Version = 0LL,
        HviGetHypervisorFeatures(BcdEnumDescriptor),
        v1 = 1,
        (*(_QWORD *)BcdEnumDescriptor & 0x100000000000LL) != 0) )
  {
    v1 = 0;
  }
  updated = BcdOpenSystemStore(&BcdStoreHandle);
  if ( updated >= 0 )
  {
    BcdEnumDescriptor[0] = (_BCD_OBJECT_DESCRIPTION)1LL;
    updated = BcdEnumerateObjects(BcdStoreHandle, BcdEnumDescriptor, 0LL, &BufferSize, &ObjectCount);
    if ( updated == -1073741789 )
    {
      Pool2 = (char *)ExAllocatePool2(0x100uLL, BufferSize, 0x62536553u);
      if ( Pool2 )
      {
        updated = BcdEnumerateObjects(BcdStoreHandle, BcdEnumDescriptor, Pool2, &BufferSize, &ObjectCount);
        if ( updated >= 0 )
        {
          v4 = 0;
          if ( ObjectCount )
          {
            while ( 1 )
            {
              BcdEnumDescriptor[0] = (_BCD_OBJECT_DESCRIPTION)&Pool2[24 * v4];
              updated = BcdOpenObject(BcdStoreHandle, *(const GUID **)BcdEnumDescriptor, &BcdObjectHandle);
              if ( updated < 0 )
                break;
              v5 = 0;
              v6 = BcdObjectHandle;
              if ( *((_WORD *)qword_140E67CE0 + 18) )
              {
                v7 = qword_140E67D18;
                do
                {
                  v8 = *(_DWORD *)(v7 + 12LL * v5);
                  if ( !v8 || v8 == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)BcdEnumDescriptor + 16LL) + 4LL) )
                  {
                    v9 = *(unsigned __int16 *)(*(unsigned int *)(v7 + 12LL * v5 + 8) + qword_140E67D28);
                    if ( (v9 & 0xFFFFF000) == 0
                      && ((v9 & 0x20) == 0 || (dword_140E67CEC & 4) != 0)
                      && ((v9 & 0x40) == 0 || (dword_140E67CEC & 0x10) != 0)
                      && ((v9 & 0x800) == 0 || (dword_140E67CEC & 0x40) != 0)
                      && (!v1 || *(_DWORD *)(v7 + 12LL * v5 + 4) != 620757041) )
                    {
                      updated = SepSecureBootUpdateBcdDataForRule(v7 + 12LL * v5, v6, v11);
                      if ( updated < 0 )
                        goto LABEL_31;
                      v7 = qword_140E67D18;
                      if ( v11[0] )
                        *v16 = 1;
                    }
                  }
                  ++v5;
                }
                while ( v5 < *((unsigned __int16 *)qword_140E67CE0 + 18) );
              }
              BcdCloseObject(v6);
              ++v4;
              v6 = 0LL;
              BcdObjectHandle = 0LL;
              if ( v4 >= ObjectCount )
                goto LABEL_31;
            }
            v6 = BcdObjectHandle;
LABEL_31:
            if ( v6 )
              BcdCloseObject(v6);
          }
        }
        ExFreePoolWithTag(Pool2, 0x62536553u);
      }
      else
      {
        updated = -1073741801;
      }
    }
  }
  if ( BcdStoreHandle )
    BcdCloseStore(BcdStoreHandle);
  return (unsigned int)updated;
}
