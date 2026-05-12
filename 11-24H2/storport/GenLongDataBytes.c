/*
 * XREFs of GenLongDataBytes @ 0x140142FCC
 * Callers:
 *     GenDataBytes @ 0x140142EC4 (GenDataBytes.c)
 * Callees:
 *     WPP_SF_DD @ 0x140067CBC (WPP_SF_DD.c)
 *     memmove @ 0x140143780 (memmove.c)
 */

__int64 __fastcall GenLongDataBytes(__int64 a1, const void *a2, unsigned int a3, char a4)
{
  size_t v5; // rsi
  __int64 v6; // rcx
  unsigned int v8; // edi
  unsigned int v10; // r9d
  unsigned int v11; // ecx
  __int64 i; // rdx
  __int64 v13; // rcx

  v5 = a3;
  v6 = *(unsigned int *)(a1 + 12);
  v8 = 0;
  v10 = *(_DWORD *)(a1 + 8);
  if ( (unsigned int)v6 + a3 + 4 <= v10 )
  {
    *(_BYTE *)(v6 + *(_QWORD *)a1) = -30;
    if ( a4 )
      *(_BYTE *)(*(unsigned int *)(a1 + 12) + *(_QWORD *)a1) |= 1u;
    v11 = ++*(_DWORD *)(a1 + 12);
    for ( i = v11 + 2; (unsigned int)i >= v11; i = (unsigned int)(i - 1) )
    {
      *(_BYTE *)(i + *(_QWORD *)a1) = a3;
      v11 = *(_DWORD *)(a1 + 12);
      a3 >>= 8;
    }
    v13 = v11 + 3;
    *(_DWORD *)(a1 + 12) = v13;
    memmove((void *)(*(_QWORD *)a1 + v13), a2, v5);
    *(_DWORD *)(a1 + 12) += v5;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_DD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xEu,
        (__int64)&WPP_7125d21b90f93d8abdbf4e6e2db0cd73_Traceguids,
        v10,
        v6 + a3 + 4);
    return (unsigned int)-1073741789;
  }
  return v8;
}
