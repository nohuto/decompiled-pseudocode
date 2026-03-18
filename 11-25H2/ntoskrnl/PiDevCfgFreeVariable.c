/*
 * XREFs of PiDevCfgFreeVariable @ 0x14095FBC4
 * Callers:
 *     PiDevCfgFreeResolveContext @ 0x14095FB44 (PiDevCfgFreeResolveContext.c)
 *     PiDevCfgResolveVariable @ 0x140A67A58 (PiDevCfgResolveVariable.c)
 * Callees:
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     _PnpCtxRegDeleteTree @ 0x14088F19C (_PnpCtxRegDeleteTree.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiDevCfgFreeVariable(PVOID P)
{
  void *v2; // rcx
  int v3; // edx

  RtlFreeAnsiString((PUNICODE_STRING)P + 1);
  v2 = (void *)*((_QWORD *)P + 5);
  if ( v2 )
  {
    v3 = *((_DWORD *)P + 8);
    if ( (_WORD)v3 == 0x8000 )
    {
      if ( (v3 & 0x100000) != 0 )
        PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, *((_QWORD *)P + 5), 0LL);
      ZwClose(*((HANDLE *)P + 5));
    }
    else
    {
      ExFreePoolWithTag(v2, 0);
    }
  }
  ExFreePoolWithTag(P, 0);
}
