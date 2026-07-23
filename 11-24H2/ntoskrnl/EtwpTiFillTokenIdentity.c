/*
 * XREFs of EtwpTiFillTokenIdentity @ 0x140A7AFB8
 * Callers:
 *     EtwTiLogImpersonateClient @ 0x1408E8518 (EtwTiLogImpersonateClient.c)
 * Callees:
 *     RtlLengthSid @ 0x14044B2D0 (RtlLengthSid.c)
 */

__int64 __fastcall EtwpTiFillTokenIdentity(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  void *v8; // rbx
  __int64 v9; // rcx
  void *v10; // rbx
  ULONG v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r10
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v22; // edx
  __int64 v23; // r8

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = 4LL;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 24) = 4LL;
  v4 = 12;
  v5 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 40) = 4LL;
  *(_QWORD *)(a1 + 32) = v5 + 4;
  v6 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 56) = 4LL;
  *(_QWORD *)(a1 + 48) = v6 + 8;
  v7 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 72) = 4LL;
  *(_QWORD *)(a1 + 64) = v7 + 12;
  v8 = *(void **)(*(_QWORD *)(a2 + 8) + 24LL);
  *(_DWORD *)(a1 + 88) = RtlLengthSid(v8);
  *(_QWORD *)(a1 + 80) = v8;
  *(_DWORD *)(a1 + 92) = 0;
  v9 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 40LL);
  *(_QWORD *)(a1 + 104) = 4LL;
  if ( v9 )
  {
    *(_QWORD *)(a1 + 96) = &qword_14001C388;
    v10 = *(void **)(*(_QWORD *)(a2 + 8) + 40LL);
    v11 = RtlLengthSid(v10);
    v12 = 144LL;
    *(_QWORD *)(a1 + 112) = v10;
    *(_DWORD *)(a1 + 120) = v11;
    v4 = 13;
    *(_DWORD *)(a1 + 124) = 0;
    v13 = 128LL;
    v14 = 192LL;
    v15 = 160LL;
    v16 = 176LL;
  }
  else
  {
    v12 = 128LL;
    *(_QWORD *)(a1 + 96) = &qword_14001C390;
    v14 = 176LL;
    v13 = 112LL;
    v15 = 144LL;
    v16 = 160LL;
  }
  v17 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(v13 + a1 + 8) = 4LL;
  *(_QWORD *)(v13 + a1) = v17 + 16;
  v18 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(v12 + a1 + 8) = 4LL;
  *(_QWORD *)(v12 + a1) = v18 + 48;
  v19 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(v15 + a1 + 8) = 4LL;
  *(_QWORD *)(v15 + a1) = v19 + 52;
  *(_QWORD *)(v16 + a1) = a2 + 16;
  *(_QWORD *)(v16 + a1 + 8) = 8LL;
  v20 = *(_QWORD *)(a2 + 8) + 64LL;
  *(_QWORD *)(v14 + a1 + 8) = 4LL;
  *(_QWORD *)(v14 + a1) = v20;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 8) + 64LL) )
  {
    v22 = *(_DWORD *)(a2 + 32);
    v23 = 2LL * v4++;
    *(_QWORD *)(a1 + 8 * v23) = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a1 + 8 * v23 + 8) = v22;
  }
  return v4;
}
