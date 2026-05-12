/*
 * XREFs of GenMediumDataBytes @ 0x14014309C
 * Callers:
 *     GenDataBytes @ 0x140142EC4 (GenDataBytes.c)
 * Callees:
 *     WPP_SF_DD @ 0x140067CBC (WPP_SF_DD.c)
 *     memmove @ 0x140143780 (memmove.c)
 */

__int64 __fastcall GenMediumDataBytes(__int64 a1, const void *a2, unsigned int a3)
{
  __int64 v5; // rcx
  unsigned int v6; // edi
  unsigned int v7; // r9d
  int v9; // [rsp+20h] [rbp-18h]

  v5 = *(unsigned int *)(a1 + 12);
  v6 = 0;
  v7 = *(_DWORD *)(a1 + 8);
  if ( (unsigned int)v5 + a3 + 2 <= v7 )
  {
    *(_BYTE *)(v5 + *(_QWORD *)a1) = (BYTE1(a3) & 7) - 48;
    *(_BYTE *)((unsigned int)++*(_DWORD *)(a1 + 12) + *(_QWORD *)a1) = a3;
    memmove((void *)(*(_QWORD *)a1 + (unsigned int)++*(_DWORD *)(a1 + 12)), a2, a3);
    *(_DWORD *)(a1 + 12) += a3;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      v9 = v5 + a3 + 2;
      WPP_SF_DD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xDu,
        (__int64)&WPP_7125d21b90f93d8abdbf4e6e2db0cd73_Traceguids,
        v7,
        v9);
    }
    return (unsigned int)-1073741789;
  }
  return v6;
}
