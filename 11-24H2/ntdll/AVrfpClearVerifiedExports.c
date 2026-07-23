/*
 * XREFs of AVrfpClearVerifiedExports @ 0x18011C6D4
 * Callers:
 *     AVrfpDllUnloadNotificationInternal @ 0x180112258 (AVrfpDllUnloadNotificationInternal.c)
 * Callees:
 *     <none>
 */

char __fastcall AVrfpClearVerifiedExports(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  char v3; // r8
  __int64 v4; // rbx
  unsigned __int64 v5; // r11
  _QWORD *i; // r9

  v2 = *(_QWORD *)(a2 + 48);
  v3 = 0;
  LODWORD(v4) = 0;
  v5 = v2 + *(unsigned int *)(a2 + 64);
  for ( i = a1; *a1; a1 = &i[3 * v4] )
  {
    if ( a1[1] >= v2 && a1[1] < v5 )
    {
      a1[1] = 0LL;
      v3 = 1;
      v2 = *(_QWORD *)(a2 + 48);
    }
    v4 = (unsigned int)(v4 + 1);
  }
  return v3;
}
