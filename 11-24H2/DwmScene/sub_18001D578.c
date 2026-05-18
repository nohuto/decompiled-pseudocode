/*
 * XREFs of sub_18001D578 @ 0x18001D578
 * Callers:
 *     sub_18001DF18 @ 0x18001DF18 (sub_18001DF18.c)
 *     sub_18001E000 @ 0x18001E000 (sub_18001E000.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001D578(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // rax

  v3 = *(_QWORD *)(a1 + 8);
  v4 = 8 * a2;
  if ( a2 >= *(_QWORD *)(v3 + 24) )
  {
    result = 0LL;
  }
  else
  {
    result = *(_QWORD *)(v4 + *(_QWORD *)(v3 + 16));
    if ( result )
      return result;
  }
  if ( *(_BYTE *)(v3 + 36) )
  {
    v6 = std::locale::_Getgloballocale();
    if ( a2 >= *(_QWORD *)(v6 + 24) )
      return 0LL;
    else
      return *(_QWORD *)(v4 + *(_QWORD *)(v6 + 16));
  }
  return result;
}
