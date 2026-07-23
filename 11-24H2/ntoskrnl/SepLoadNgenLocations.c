/*
 * XREFs of SepLoadNgenLocations @ 0x14078E5FC
 * Callers:
 *     SepSetSystemPaths @ 0x14078E970 (SepSetSystemPaths.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1406A7610 (ZwEnumerateValueKey.c)
 *     ZwQueryKey @ 0x1406A7670 (ZwQueryKey.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepLoadNgenLocations(__int64 a1)
{
  unsigned int v1; // r13d
  NTSTATUS v2; // eax
  NTSTATUS v3; // ebx
  ULONG v4; // eax
  ULONG v5; // esi
  unsigned int v6; // edi
  unsigned int v7; // r15d
  unsigned int v8; // r14d
  _DWORD *Pool2; // rsi
  __int64 v10; // rax
  signed __int64 v11; // rdi
  ULONG v12; // r12d
  unsigned int v13; // r14d
  unsigned int v14; // edx
  unsigned int v15; // ecx
  unsigned int v16; // eax
  void *v17; // r9
  unsigned int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  ULONG ResultLength; // [rsp+38h] [rbp-69h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-61h] BYREF
  ULONG Length; // [rsp+48h] [rbp-59h]
  void *v26; // [rsp+50h] [rbp-51h]
  __int64 v27; // [rsp+58h] [rbp-49h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-41h] BYREF
  __int128 KeyValueInformation; // [rsp+90h] [rbp-11h] BYREF
  _OWORD KeyInformation[2]; // [rsp+A0h] [rbp-1h] BYREF
  __int128 v31; // [rsp+C0h] [rbp+1Fh]

  v27 = a1;
  v1 = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ResultLength = 0;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"tv";
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v31 = 0LL;
  KeyValueInformation = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    v3 = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
    if ( v3 >= 0 )
    {
      v4 = v31;
      if ( (_DWORD)v31 )
      {
        if ( (unsigned int)(DWORD1(v31) - 1) <= 0xFFFE )
        {
          v5 = 0;
          v6 = 0;
          v7 = 0;
          while ( v5 < v4 )
          {
            v3 = ZwEnumerateValueKey(
                   KeyHandle,
                   v5,
                   KeyValueBasicInformation,
                   &KeyValueInformation,
                   0x10u,
                   &ResultLength);
            if ( ((v3 + 0x80000000) & 0x80000000) == 0 && v3 != -2147483643 )
              goto LABEL_47;
            if ( DWORD1(KeyValueInformation) == 4 && DWORD2(KeyValueInformation) >= 2 )
            {
              v6 += DWORD2(KeyValueInformation) + 16;
              if ( v6 < DWORD2(KeyValueInformation) + 16 )
                goto LABEL_46;
              ++v7;
            }
            v4 = v31;
            ++v5;
          }
          if ( !v7 )
          {
            v3 = 0;
            goto LABEL_47;
          }
          v8 = v6 + 8;
          if ( v6 + 8 < v6 )
          {
LABEL_46:
            v3 = -1073741675;
            goto LABEL_47;
          }
          v3 = 0;
          Length = DWORD1(v31) + 16;
          Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, (unsigned int)(DWORD1(v31) + 16), 0x63734943u);
          if ( Pool2 )
          {
            v10 = ExAllocatePool2(0x100uLL, v8, 0x63734943u);
            v11 = v10;
            if ( v10 )
            {
              *(_WORD *)(v10 + 4) = -1;
              v12 = 0;
              *(_WORD *)(v10 + 6) = 0;
              v26 = (void *)(v10 + 16LL * v7 + 8);
              v13 = v8 - (16 * v7 + 8);
              while ( v12 < (unsigned int)v31 )
              {
                v3 = ZwEnumerateValueKey(KeyHandle, v12, KeyValueBasicInformation, Pool2, Length, &ResultLength);
                if ( v3 < 0 )
                  goto LABEL_43;
                if ( Pool2[1] == 4 )
                {
                  v14 = Pool2[2];
                  if ( v14 >= 2 )
                  {
                    v15 = Pool2[2];
                    do
                    {
                      if ( *((_WORD *)Pool2 + ((unsigned __int64)v14 >> 1) + 5) )
                        break;
                      Pool2[2] = v14 - 2;
                      v14 -= 2;
                      v15 = v14;
                    }
                    while ( v14 >= 2 );
                    if ( v15 )
                    {
                      if ( v15 > v13 || v1 >= v7 )
                      {
                        v3 = -2147483643;
                        goto LABEL_43;
                      }
                      v16 = *(unsigned __int16 *)(v11 + 4);
                      v17 = v26;
                      if ( v16 >= v15 )
                        LOWORD(v16) = v15;
                      v18 = *(unsigned __int16 *)(v11 + 6);
                      *(_WORD *)(v11 + 4) = v16;
                      if ( v18 <= Pool2[2] )
                        LOWORD(v18) = Pool2[2];
                      *(_WORD *)(v11 + 6) = v18;
                      v19 = 2LL * v1;
                      *(_QWORD *)(v11 + 8 * v19 + 16) = v17;
                      *(_WORD *)(v11 + 8 * v19 + 8) = *((_WORD *)Pool2 + 4);
                      *(_WORD *)(v11 + 8 * v19 + 10) = *((_WORD *)Pool2 + 4);
                      memmove(v17, Pool2 + 3, (unsigned int)Pool2[2]);
                      v20 = (unsigned int)Pool2[2];
                      v26 = (char *)v26 + v20;
                      v13 -= v20;
                      ++v1;
                    }
                  }
                }
                ++v12;
              }
              *(_WORD *)(v11 + 4) += 8;
              *(_WORD *)(v11 + 6) += 8;
              v21 = v27;
              *(_DWORD *)v11 = v1;
              v11 &= -(__int64)(_InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 40), v11, 0LL) != 0);
            }
            else
            {
              v3 = -1073741801;
            }
LABEL_43:
            if ( v11 )
              ExFreePoolWithTag((PVOID)v11, 0x63734943u);
            ExFreePoolWithTag(Pool2, 0x63734943u);
          }
          else
          {
            v3 = -1073741801;
          }
        }
      }
    }
  }
  else
  {
    v3 = 0;
    if ( v2 != -1073741772 )
      v3 = v2;
  }
LABEL_47:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v3;
}
