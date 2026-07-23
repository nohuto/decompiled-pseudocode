/*
 * XREFs of EtwpTiFillVad @ 0x140455330
 * Callers:
 *     EtwpTiFillVadEventWrite @ 0x140455204 (EtwpTiFillVadEventWrite.c)
 *     EtwTiLogProtectExecVm @ 0x1408DB660 (EtwTiLogProtectExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x140992E08 (EtwTiLogReadWriteVm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpTiFillVad(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // r8d
  __int64 *v4; // rdx

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = 4LL;
  *(_QWORD *)(a1 + 16) = a2 + 8;
  *(_QWORD *)(a1 + 24) = 8LL;
  *(_QWORD *)(a1 + 32) = a2 + 16;
  *(_QWORD *)(a1 + 40) = 4LL;
  *(_QWORD *)(a1 + 48) = a2 + 20;
  *(_QWORD *)(a1 + 56) = 4LL;
  *(_QWORD *)(a1 + 64) = a2 + 24;
  *(_QWORD *)(a1 + 72) = 8LL;
  *(_QWORD *)(a1 + 80) = a2 + 32;
  *(_QWORD *)(a1 + 88) = 8LL;
  v2 = *(_QWORD *)(a2 + 56);
  if ( v2 && (v4 = *(__int64 **)(v2 + 8)) != 0LL && *(_WORD *)v2 )
  {
    v3 = *(unsigned __int16 *)(v2 + 2);
  }
  else
  {
    v3 = 2;
    v4 = qword_140019A90;
  }
  *(_QWORD *)(a1 + 96) = v4;
  *(_DWORD *)(a1 + 104) = v3;
  *(_DWORD *)(a1 + 108) = 0;
  return 7LL;
}
