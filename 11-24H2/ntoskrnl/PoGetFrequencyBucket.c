/*
 * XREFs of PoGetFrequencyBucket @ 0x140282450
 * Callers:
 *     KiRetireDpcList @ 0x1402824C0 (KiRetireDpcList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PoGetFrequencyBucket(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r8
  unsigned int v3; // r8d
  __int64 result; // rax
  unsigned __int16 *v5; // rcx

  v1 = *(_QWORD *)(a1 + 35248);
  v2 = *(_QWORD *)(a1 + 35256);
  if ( v1 && v2 )
  {
    if ( *(_BYTE *)(v2 + 112) )
    {
      v3 = *(_DWORD *)(v2 + 132);
    }
    else
    {
      v3 = *(_DWORD *)(v2 + 80);
      if ( v3 >= *(_DWORD *)(v1 + 528) )
        v3 = *(_DWORD *)(v1 + 528);
    }
  }
  else
  {
    v3 = 100;
  }
  result = 0LL;
  v5 = (unsigned __int16 *)(a1 + 35434);
  do
  {
    if ( v3 <= *v5 )
      break;
    result = (unsigned int)(result + 1);
    ++v5;
  }
  while ( (unsigned int)result < 3 );
  return result;
}
