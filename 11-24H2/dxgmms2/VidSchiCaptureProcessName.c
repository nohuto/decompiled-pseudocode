/*
 * XREFs of VidSchiCaptureProcessName @ 0x140034170
 * Callers:
 *     VidSchCollectDbgInfo @ 0x1401056E0 (VidSchCollectDbgInfo.c)
 * Callees:
 *     <none>
 */

const char *__fastcall VidSchiCaptureProcessName(__int64 a1, char *a2)
{
  const char *v3; // rdx
  __int64 v4; // rcx
  signed __int64 v5; // rdx
  char v6; // al
  const char *result; // rax
  __int64 v8; // rcx

  if ( a1 == *(_QWORD *)(*(_QWORD *)(a1 + 32) + 256LL) )
  {
    v3 = "System";
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 40);
    if ( v8 && *(_QWORD *)(v8 + 8) )
    {
      result = (const char *)PsGetProcessImageFileName(*(_QWORD *)(v8 + 2656));
      v3 = result;
      if ( !result || !*result )
      {
        *a2 = 0;
        return result;
      }
    }
    else
    {
      v3 = "Unknown";
    }
  }
  v4 = 16LL;
  v5 = v3 - a2;
  do
  {
    if ( v4 == -2147483630 )
      break;
    v6 = a2[v5];
    if ( !v6 )
      break;
    *a2++ = v6;
    --v4;
  }
  while ( v4 );
  result = a2 - 1;
  if ( v4 )
    result = a2;
  *result = 0;
  return result;
}
