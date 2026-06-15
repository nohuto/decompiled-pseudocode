/*
 * XREFs of ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180031158
 * Callers:
 *     ?LoadPropertyStore@CAudioSessionPropertyStore@@AEAAJXZ @ 0x1800169D0 (-LoadPropertyStore@CAudioSessionPropertyStore@@AEAAJXZ.c)
 *     ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x1800304C4 (-NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z.c)
 *     ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x180030664 (-NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z @ 0x1800307EC (-NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z.c)
 *     ?NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x180030910 (-NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     _lambda_27a4ba88670a0d404d45da27056d59bf_::operator() @ 0x180044798 (_lambda_27a4ba88670a0d404d45da27056d59bf_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCbCopyW(char *a1, unsigned __int64 a2, char *a3)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r9
  signed __int64 v5; // r10
  unsigned __int16 v6; // ax
  unsigned __int16 *v7; // rax
  __int64 result; // rax

  v3 = a2 >> 1;
  if ( v3 - 1 > 0x7FFFFFFE )
  {
    result = 2147942487LL;
    if ( v3 )
      *(_WORD *)a1 = 0;
  }
  else
  {
    v4 = 2147483646 - v3;
    v5 = a3 - a1;
    do
    {
      if ( !(v4 + v3) )
        break;
      v6 = *(_WORD *)&a1[v5];
      if ( !v6 )
        break;
      *(_WORD *)a1 = v6;
      a1 += 2;
      --v3;
    }
    while ( v3 );
    v7 = (unsigned __int16 *)(a1 - 2);
    if ( v3 )
      v7 = (unsigned __int16 *)a1;
    *v7 = 0;
    return v3 == 0 ? 0x8007007A : 0;
  }
  return result;
}
