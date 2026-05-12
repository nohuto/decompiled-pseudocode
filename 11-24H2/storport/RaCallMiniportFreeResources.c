/*
 * XREFs of RaCallMiniportFreeResources @ 0x14003E15C
 * Callers:
 *     RaDeleteMiniport @ 0x1401BBE48 (RaDeleteMiniport.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

void __fastcall RaCallMiniportFreeResources(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  void (__fastcall *v3)(__int64); // rax

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 232);
    if ( v1 )
    {
      v2 = *(_QWORD *)(a1 + 240);
      if ( v2 )
      {
        if ( (*(_BYTE *)(a1 + 248) & 8) != 0 )
        {
          v3 = *(void (__fastcall **)(__int64))(v1 + 136);
          if ( v3 )
            v3(v2 + 16);
        }
      }
    }
  }
}
