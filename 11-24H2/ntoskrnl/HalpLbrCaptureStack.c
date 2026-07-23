/*
 * XREFs of HalpLbrCaptureStack @ 0x1403F99C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpLbrCaptureStack(unsigned int a1, __int64 a2, _DWORD *a3)
{
  unsigned __int64 v3; // r9
  int v5; // edx
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rbx
  unsigned int v9; // r12d
  int v10; // edi
  char v11; // bp
  char v12; // si
  unsigned int v13; // r8d
  unsigned int v14; // r14d
  unsigned __int64 *v15; // r10
  unsigned int v16; // ecx
  unsigned int v18; // r13d
  unsigned __int64 v19; // rax
  int v20; // [rsp+40h] [rbp+18h]

  v3 = 0LL;
  v5 = 0;
  *a3 = 0;
  v7 = 0LL;
  v20 = 0;
  v8 = 0LL;
  if ( !HalpLbrAreOperationsAllowed )
    return 3221225659LL;
  v9 = HalpLbrStackSize;
  if ( a1 < 24 * HalpLbrStackSize )
    return 3221225476LL;
  v10 = HalpLbrType;
  if ( HalpLbrType == 1 )
  {
    v19 = __readmsr(0x1C9u);
    v5 = (HalpLbrStackSize - 1) & v19;
    v20 = v5;
  }
  v11 = 63 - HalpLbrMostSignificantFromAddrBit;
  v12 = 63 - HalpLbrMostSignificantToAddrBit;
  if ( HalpLbrStackSize )
  {
    v13 = 5632;
    v14 = -1073675519;
    v15 = (unsigned __int64 *)(a2 + 16);
    while ( v10 != 2 )
    {
      if ( v10 == 1 )
      {
        v18 = (v5 - v13 + 5632) % v9;
        v3 = __readmsr(v18 + 1664);
        v8 = __readmsr(v18 + 1728);
        if ( HalpLbrInfoSupported )
        {
          v16 = v18 + 3520;
LABEL_9:
          v7 = __readmsr(v16);
        }
LABEL_10:
        v5 = v20;
        goto LABEL_11;
      }
      if ( v10 == 3 )
      {
        v3 = __readmsr(v14 - 1);
        v8 = __readmsr(v14);
        goto LABEL_10;
      }
LABEL_11:
      if ( v3 )
      {
        *v15 = v7;
        ++v13;
        v14 += 2;
        *(v15 - 2) = (__int64)(v3 << v11) >> v11;
        *(v15 - 1) = (__int64)(v8 << v12) >> v12;
        v15 += 3;
        *a3 += 24;
        if ( v13 - 5632 < v9 )
          continue;
      }
      return 0LL;
    }
    v3 = __readmsr(v13 - 256);
    v16 = v13 - 1024;
    v8 = __readmsr(v13);
    goto LABEL_9;
  }
  return 0LL;
}
