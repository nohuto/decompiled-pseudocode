/*
 * XREFs of GenInteger @ 0x140142F4C
 * Callers:
 *     GenSetTableColumnParams @ 0x14013E8C0 (GenSetTableColumnParams.c)
 *     GenActivateParams @ 0x14013F600 (GenActivateParams.c)
 *     GenSetTPerPropertiesParams @ 0x140140A40 (GenSetTPerPropertiesParams.c)
 *     GenStartSessionParams @ 0x140140C00 (GenStartSessionParams.c)
 *     GenCallMethodEnd @ 0x140142E18 (GenCallMethodEnd.c)
 *     GenNamedValueBegin @ 0x14014314C (GenNamedValueBegin.c)
 *     GenNamedValueInt @ 0x1401431F0 (GenNamedValueInt.c)
 * Callees:
 *     WPP_SF_DD @ 0x140067CBC (WPP_SF_DD.c)
 *     GenShortInteger @ 0x14014336C (GenShortInteger.c)
 */

__int64 __fastcall GenInteger(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rcx
  unsigned int v4; // r10d
  unsigned int v5; // r9d
  int v7; // [rsp+20h] [rbp-18h]

  if ( a2 >= 0x40 )
  {
    return (unsigned int)GenShortInteger(a1, a2, a1);
  }
  else
  {
    v3 = *(unsigned int *)(a1 + 12);
    v4 = 0;
    v5 = *(_DWORD *)(a1 + 8);
    if ( (int)v3 + 1 <= v5 )
    {
      *(_BYTE *)(v3 + *(_QWORD *)a1) = a2 & 0x3F;
      ++*(_DWORD *)(a1 + 12);
    }
    else
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        v7 = v3 + 1;
        WPP_SF_DD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0xAu,
          (__int64)&WPP_7125d21b90f93d8abdbf4e6e2db0cd73_Traceguids,
          v5,
          v7);
      }
      return (unsigned int)-1073741789;
    }
  }
  return v4;
}
