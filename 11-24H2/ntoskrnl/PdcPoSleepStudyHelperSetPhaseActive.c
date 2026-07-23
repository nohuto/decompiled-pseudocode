/*
 * XREFs of PdcPoSleepStudyHelperSetPhaseActive @ 0x140A94210
 * Callers:
 *     <none>
 * Callees:
 *     SshpSetCollectionActive @ 0x140474D70 (SshpSetCollectionActive.c)
 */

void __fastcall PdcPoSleepStudyHelperSetPhaseActive(int a1, unsigned __int8 a2)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  __int64 v6; // rax
  int v7; // ecx

  if ( !a1 )
  {
    v6 = 336LL;
    goto LABEL_7;
  }
  v2 = a1 - 1;
  if ( !v2 )
  {
    v6 = 48LL;
    goto LABEL_7;
  }
  v3 = v2 - 1;
  if ( !v3 )
  {
    v6 = 96LL;
    goto LABEL_7;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v6 = 144LL;
    goto LABEL_7;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v6 = 192LL;
LABEL_7:
    SshpSetCollectionActive((ULONG_PTR)&SshpBlockerCollections + v6, a2);
    return;
  }
  v7 = v5 - 1;
  if ( !v7 )
  {
    v6 = 240LL;
    goto LABEL_7;
  }
  if ( v7 == 3 )
  {
    v6 = 288LL;
    goto LABEL_7;
  }
}
