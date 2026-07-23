/*
 * XREFs of ExpGetSystemFlushInformation @ 0x140A397A4
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1408590B8 (ExpGetSystemFirmwareTableInformation.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpGetSystemFlushInformation(__int64 a1)
{
  int v2; // edx
  __int64 v4; // r15
  unsigned int v5; // r13d
  __int64 Pool2; // rax
  unsigned int *v7; // r14
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  unsigned int *i; // rcx
  __int64 v11; // rax
  unsigned int v12[4]; // [rsp+28h] [rbp-50h] BYREF
  _DWORD Src[3]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v14; // [rsp+44h] [rbp-34h]

  *(_QWORD *)v12 = a1;
  v2 = ((unsigned __int64)KeFeatureBits >> 34) & 4 | 1;
  if ( _bittest64(&KeFeatureBits, 0x23u) )
    v2 = ((unsigned __int64)KeFeatureBits >> 34) & 4 | 3;
  *(_DWORD *)a1 = v2;
  *(_DWORD *)(a1 + 4) = KeGetCurrentPrcb()->CFlushSize;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( !ExpPlatformCapabilitiesCached )
  {
    v4 = 0LL;
    v14 = 0LL;
    v12[0] = 0;
    Src[0] = 1094930505;
    Src[1] = 1;
    Src[2] = 1414088270;
    if ( (unsigned int)ExpGetSystemFirmwareTableInformation((char *)Src, 0, 0x14u, v12) == -1073741789 )
    {
      v5 = v12[0];
      Pool2 = ExAllocatePool2(0x100uLL, v12[0], 0x54425057u);
      v7 = (unsigned int *)Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)Pool2 = 1094930505;
        *(_DWORD *)(Pool2 + 4) = 1;
        *(_DWORD *)(Pool2 + 8) = 1414088270;
        *(_DWORD *)(Pool2 + 12) = v5 - 16;
        if ( (int)ExpGetSystemFirmwareTableInformation((char *)Pool2, 0, v5, v12) >= 0 )
        {
          v8 = v7[5];
          if ( (unsigned int)v8 >= v12[0] - 16 )
          {
            v9 = (unsigned __int64)v7 + v8 + 16;
            for ( i = v7 + 14; (unsigned __int64)(i + 1) <= v9; i = (unsigned int *)((char *)i + v11) )
            {
              v11 = *((unsigned __int16 *)i + 1);
              if ( (unsigned __int64)i + v11 > v9 || !(_WORD)v11 )
                break;
              if ( *(_WORD *)i == 7 && (unsigned int)v11 >= 0x10 )
              {
                if ( (i[2] & 1) != 0 )
                  v4 = 1LL;
                break;
              }
            }
          }
        }
        ExFreePoolWithTag(v7, 0);
      }
    }
    ExpPlatformFlushCapabilities = v4;
    ExpPlatformCapabilitiesCached = 1;
  }
  *(_QWORD *)(a1 + 8) = ExpPlatformFlushCapabilities;
  return 0LL;
}
