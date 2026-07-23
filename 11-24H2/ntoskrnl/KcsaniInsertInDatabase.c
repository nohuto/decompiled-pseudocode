/*
 * XREFs of KcsaniInsertInDatabase @ 0x1405AB7F0
 * Callers:
 *     KcsanValidateAddress @ 0x1405AB550 (KcsanValidateAddress.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140231C20 (RtlCaptureStackBackTrace.c)
 */

void __fastcall KcsaniInsertInDatabase(__int64 a1, __int64 a2)
{
  unsigned int i; // r8d
  __int64 v5; // r10
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int32 v10; // ebx
  __int128 v11; // xmm1
  char *v12; // r8

  if ( KcsanReports[0] <= 0x100u )
  {
    for ( i = 0; i < KcsanReports[0]; ++i )
    {
      v5 = *(_QWORD *)(a1 + 32);
      v6 = 46LL * i;
      v7 = *(_QWORD *)&KcsanReports[v6 + 10];
      if ( v7 == v5 )
        return;
      v8 = *(_QWORD *)(a2 + 32);
      if ( v7 == v8 )
        return;
      v9 = *(_QWORD *)&KcsanReports[v6 + 18];
      if ( v9 == v5 || v9 == v8 )
        return;
    }
    v10 = _InterlockedIncrement(KcsanReports);
    if ( v10 <= 0x100 )
    {
      v11 = *(_OWORD *)(a1 + 24);
      v12 = (char *)&unk_140F591B0 + 184 * v10 - 184;
      *(_OWORD *)v12 = *(_OWORD *)(a1 + 8);
      *((_OWORD *)v12 + 1) = v11;
      *((_OWORD *)v12 + 2) = *(_OWORD *)(a2 + 8);
      *((_OWORD *)v12 + 3) = *(_OWORD *)(a2 + 24);
      RtlCaptureStackBackTrace(3u, 0xFu, (PVOID *)v12 + 8, 0LL);
      _InterlockedIncrement(&dword_140F591A4);
      if ( v10 == 256 )
        byte_140F591AC = 1;
    }
  }
}
