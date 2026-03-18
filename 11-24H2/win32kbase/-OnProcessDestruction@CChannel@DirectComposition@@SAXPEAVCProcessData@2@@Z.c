/*
 * XREFs of ?OnProcessDestruction@CChannel@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x140073708
 * Callers:
 *     ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x1400735D0 (--1CProcessData@DirectComposition@@AEAA@XZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall DirectComposition::CChannel::OnProcessDestruction(char **a1)
{
  struct _ERESOURCE *v2; // rcx
  char *v3; // rsi
  _QWORD *v4; // rax
  __int64 v5; // rdi
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    while ( 1 )
    {
      v3 = *a1;
      RestartKey = 0LL;
      v4 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)v3, &RestartKey);
      if ( !v4 )
        break;
      v5 = v4[1];
      RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)v3, v4);
      if ( !v5 )
        break;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
    }
    GreDeleteFastMutex(*a1);
  }
  v2 = (struct _ERESOURCE *)a1[1];
  if ( v2 )
  {
    ExDeleteResourceLite(v2);
    GreDeleteFastMutex(a1[1]);
  }
}
