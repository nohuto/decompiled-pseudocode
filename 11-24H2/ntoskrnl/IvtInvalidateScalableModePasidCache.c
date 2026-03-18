/*
 * XREFs of IvtInvalidateScalableModePasidCache @ 0x14056F638
 * Callers:
 *     IvtInvalidateScalableModeContextEntry @ 0x14056F5C0 (IvtInvalidateScalableModeContextEntry.c)
 *     IvtLegacySetPasidAddressSpace @ 0x140570C50 (IvtLegacySetPasidAddressSpace.c)
 *     IvtSetPasidAddressSpace @ 0x1405712B0 (IvtSetPasidAddressSpace.c)
 *     IvtInitializeIommu @ 0x140B51B90 (IvtInitializeIommu.c)
 * Callees:
 *     IvtIommuWaitCommand @ 0x1403BB7F4 (IvtIommuWaitCommand.c)
 *     IvtIommuSendCommand @ 0x1403BB944 (IvtIommuSendCommand.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall IvtInvalidateScalableModePasidCache(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        char a6,
        char a7)
{
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  __int128 v13; // [rsp+20h] [rbp-20h] BYREF

  v13 = 0LL;
  if ( a3 == 0x10000 )
  {
    v10 = 55LL;
  }
  else
  {
    v10 = ((unsigned __int64)(unsigned __int16)a3 << 16) | 7;
    *(_QWORD *)&v13 = v10;
    if ( a4 == -1 )
      goto LABEL_6;
    v10 |= ((a4 & 0xFFFFFLL) << 32) | 0x10;
  }
  *(_QWORD *)&v13 = v10;
LABEL_6:
  IvtIommuSendCommand(a1, &v13, a5);
  if ( a6 )
  {
    v11 = v10 & 0x30;
    *((_QWORD *)&v13 + 1) = 0LL;
    if ( v11 == 48 || !v11 )
      *(_QWORD *)&v13 = 18LL;
    else
      *(_QWORD *)&v13 = ((a4 & 0xFFFFFLL) << 32) | 0x26;
    IvtIommuSendCommand(a1, &v13, a5);
    if ( a7 )
    {
      if ( a4 == -1 )
      {
        *(_QWORD *)&v13 = ((unsigned __int64)a2 << 32) | 3;
        *((_QWORD *)&v13 + 1) = 0x7FFFFFFFFFFFF001LL;
      }
      else
      {
        *((_QWORD *)&v13 + 1) = 0x7FFFFFFFFFFFF800LL;
        *(_QWORD *)&v13 = ((a2 | ((a4 & 0xFFFFFLL) << 16)) << 16) | 8;
      }
      IvtIommuSendCommand(a1, &v13, a5);
    }
  }
  return IvtIommuWaitCommand(a1, 0, a5);
}
