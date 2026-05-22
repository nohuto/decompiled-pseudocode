/*
 * XREFs of ?GetHwndAsInputSiteId@LegacyInputSinkData@@QEBA_KXZ @ 0x1800523A0
 * Callers:
 *     ?SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z @ 0x180052110 (-SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z.c)
 * Callees:
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x18009B5DC (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?_Throw_bad_variant_access@std@@YAXXZ @ 0x18009B664 (-_Throw_bad_variant_access@std@@YAXXZ.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1800F1618 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 */

unsigned __int64 __fastcall LegacyInputSinkData::GetHwndAsInputSiteId(LegacyInputSinkData *this)
{
  __int64 v1; // rsi
  __int64 v3; // rax
  int v4; // ecx
  unsigned int *i; // r14
  __int64 v6; // rbx
  bool v7; // cl
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v11; // [rsp+28h] [rbp-59h] BYREF
  __int128 v12; // [rsp+38h] [rbp-49h]
  __int128 v13; // [rsp+48h] [rbp-39h]
  __int64 v14; // [rsp+58h] [rbp-29h]
  _BYTE v15[64]; // [rsp+68h] [rbp-19h] BYREF
  _DWORD v16[4]; // [rsp+A8h] [rbp+27h] BYREF
  __int64 v17; // [rsp+B8h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  LODWORD(v1) = 0;
  v3 = 0LL;
  v4 = 1;
  do
    v16[v3++] = v4++;
  while ( v3 < 4 );
  for ( i = v16; i != (unsigned int *)&v17; ++i )
  {
    switch ( *i )
    {
      case 1u:
        v6 = *i - 1 + 40;
        break;
      case 2u:
        v6 = 104LL;
        break;
      case 3u:
        v6 = 168LL;
        break;
      case 4u:
        v6 = 232LL;
        break;
      case 5u:
        v6 = 296LL;
        break;
      default:
        wil::details::in1diag3::FailFast_UnexpectedMsg(
          retaddr,
          (void *)0xB7,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\legacyinputsinkdata.cpp",
          "Invalid input type provided.",
          (const char *)v11);
    }
    v7 = *((_BYTE *)this + v6 + 56) == 0;
    if ( *i == 5 )
      v7 = 1;
    if ( v7 )
    {
      v11 = 0LL;
      v14 = 0LL;
      v12 = 0LL;
      v13 = 0LL;
      memset_0(v15, 0, sizeof(v15));
      if ( *((_BYTE *)this + 8) > 1u )
        std::_Throw_bad_variant_access();
      NtQueryCompositionInputQueueAndTransform(*(_QWORD *)this, *i, &v11, v15);
      v8 = v12;
      *(_OWORD *)((char *)this + v6) = v11;
      v9 = v13;
      *(_OWORD *)((char *)this + v6 + 16) = v8;
      *(_QWORD *)&v8 = v14;
      *(_OWORD *)((char *)this + v6 + 32) = v9;
      *(_QWORD *)((char *)this + v6 + 48) = v8;
      if ( !*((_BYTE *)this + v6 + 56) )
        *((_BYTE *)this + v6 + 56) = 1;
    }
    else if ( !*((_BYTE *)this + v6 + 56) )
    {
      std::_Throw_bad_optional_access();
    }
    if ( (unsigned int)(*(_DWORD *)((char *)this + v6) - 2) <= 1 )
      return (unsigned int)*(_QWORD *)((char *)this + v6 + 8);
  }
  return (unsigned int)v1;
}
