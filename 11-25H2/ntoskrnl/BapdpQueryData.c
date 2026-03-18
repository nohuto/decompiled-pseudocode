/*
 * XREFs of BapdpQueryData @ 0x140C2E560
 * Callers:
 *     BapdpProcessEtwEvents @ 0x140646DA4 (BapdpProcessEtwEvents.c)
 *     BapdpProcessSpacesBootInformation @ 0x140646EE0 (BapdpProcessSpacesBootInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x140C2D9DC (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessBootMetadata @ 0x140C2DABC (BapdpProcessBootMetadata.c)
 *     BapdpProcessEDrvHintInfo @ 0x140C2DBFC (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x140C2DCDC (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessHSTIResults @ 0x140C2DDBC (BapdpProcessHSTIResults.c)
 *     BapdpProcessResumeInformation @ 0x140C2DEA0 (BapdpProcessResumeInformation.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140C2DF80 (BapdpProcessVsmKeyBlobs.c)
 *     BapdpProcessWmdResults @ 0x140C2E37C (BapdpProcessWmdResults.c)
 *     BapdpRegisterWbclData @ 0x140C2ED5C (BapdpRegisterWbclData.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 */

__int64 __fastcall BapdpQueryData(__int64 a1, _QWORD *a2, int a3, void *a4, unsigned int *a5, _OWORD *a6)
{
  __int64 *v9; // r8
  int i; // r9d
  __int64 v11; // rbx
  __int64 v12; // rdx
  unsigned int v13; // eax

  if ( !a5 || !a2 || *a5 && !a4 )
    return 3221225485LL;
  v9 = (__int64 *)qword_140E620C0;
  for ( i = 0; ; ++i )
  {
    while ( 1 )
    {
      if ( v9 == &qword_140E620C0 )
        return 3221226021LL;
      v11 = v9[2];
      v9 = (__int64 *)*v9;
      if ( (unsigned int)(*(_DWORD *)(v11 + 32) - 1) <= 1 )
      {
        v12 = *a2 - *(_QWORD *)(v11 + 16);
        if ( *a2 == *(_QWORD *)(v11 + 16) )
          v12 = a2[1] - *(_QWORD *)(v11 + 24);
        if ( !v12 )
          break;
      }
    }
    if ( a3 == i )
      break;
  }
  v13 = *(_DWORD *)(v11 + 36);
  if ( *a5 >= v13 )
  {
    memmove(a4, (const void *)(v11 + *(unsigned int *)(v11 + 40)), *(unsigned int *)(v11 + 36));
    if ( a6 )
      *a6 = *(_OWORD *)v11;
    return 0LL;
  }
  else
  {
    *a5 = v13;
    return 3221225507LL;
  }
}
