/*
 * XREFs of PpmHeteroComputeMinRelativePerformane @ 0x140A20D1C
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140A2061C (PopInitializeHeteroProcessors.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

void PpmHeteroComputeMinRelativePerformane()
{
  __int64 i; // rdi
  unsigned int v1; // r9d
  unsigned int v2; // r8d
  int *v3; // r10
  int v4; // edx
  __int64 Pool2; // rax
  __int64 v6; // rcx
  _DWORD *v7; // rdi
  char v8; // [rsp+30h] [rbp-68h] BYREF
  __int64 v9; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+40h] [rbp-58h] BYREF
  char *v11; // [rsp+60h] [rbp-38h]
  int v12; // [rsp+68h] [rbp-30h]
  int v13; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v14; // [rsp+70h] [rbp-28h]
  int v15; // [rsp+78h] [rbp-20h]
  int v16; // [rsp+7Ch] [rbp-1Ch]

  if ( !PpmHeteroMinRelativePerformance )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    PpmHeteroMinRelativePerformance = Pool2;
    if ( !Pool2 )
      goto LABEL_13;
    v6 = (unsigned __int8)PpmMaxCoreClasses;
    if ( PpmMaxCoreClasses )
    {
      v7 = (_DWORD *)Pool2;
      while ( v6 )
      {
        *v7++ = 0x10000;
        --v6;
      }
    }
  }
  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
  {
    if ( !*(_DWORD *)(i + 304) )
    {
      v1 = (unsigned __int8)PpmMaxCoreClasses;
      v2 = 0;
      if ( PpmMaxCoreClasses )
      {
        v3 = (int *)PpmHeteroMinRelativePerformance;
        do
        {
          if ( v2 > *(unsigned __int8 *)(i + 300) )
            break;
          v4 = *v3;
          if ( (unsigned int)*v3 >= *(_DWORD *)(**(_QWORD **)(i + 312) + 64LL) )
            v4 = *(_DWORD *)(**(_QWORD **)(i + 312) + 64LL);
          ++v2;
          *v3++ = v4;
        }
        while ( v2 < v1 );
      }
    }
  }
LABEL_13:
  if ( !PpmHeteroMinRelativePerformance
    && (unsigned int)dword_140E07680 > 5
    && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
  {
    v13 = 0;
    v16 = 0;
    v8 = PpmMaxCoreClasses;
    v12 = 1;
    v11 = &v8;
    v14 = &v9;
    v9 = 0x1000000LL;
    v15 = 8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07680, (unsigned __int8 *)byte_14004B2A3, 0LL, 0LL, 4u, &v10);
  }
}
