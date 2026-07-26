/*
 * XREFs of ?PollDriver@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x140003C6C
 * Callers:
 *     ?EvtPollDriver@NdisPoll@@CAXPEAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x140003C10 (-EvtPollDriver@NdisPoll@@CAXPEAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

void __fastcall NdisPoll::PollDriver(NdisPoll *this, struct _EXECUTION_CONTEXT_POLL_PARAMETERS *a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rax
  _DWORD *v12; // rax
  int v13; // ecx
  int v14; // ecx
  void (__fastcall *v15)(_QWORD); // rax
  _OWORD v16[10]; // [rsp+20h] [rbp-A8h] BYREF

  memset(v16, 0, 0x98uLL);
  v4 = v16[1];
  *(_OWORD *)((char *)this + 168) = v16[0];
  v5 = v16[2];
  *(_OWORD *)((char *)this + 184) = v4;
  v6 = v16[3];
  *(_OWORD *)((char *)this + 200) = v5;
  v7 = v16[4];
  *(_OWORD *)((char *)this + 216) = v6;
  v8 = v16[5];
  *(_OWORD *)((char *)this + 232) = v7;
  v9 = v16[6];
  *(_OWORD *)((char *)this + 248) = v8;
  v10 = v16[8];
  *(_OWORD *)((char *)this + 264) = v9;
  v11 = *(_QWORD *)&v16[9];
  *(_OWORD *)((char *)this + 280) = v16[7];
  *(_OWORD *)((char *)this + 296) = v10;
  *((_QWORD *)this + 39) = v11;
  v12 = (_DWORD *)*((_QWORD *)this + 79);
  *((_BYTE *)this + 168) = 0x80;
  *((_BYTE *)this + 169) = 1;
  *((_WORD *)this + 85) = 152;
  if ( *(_BYTE *)a2 == 2 )
    v13 = v12[12];
  else
    v13 = v12[11];
  *((_DWORD *)this + 62) = v13;
  if ( *(_BYTE *)a2 == 2 )
    v14 = v12[10];
  else
    v14 = v12[9];
  v15 = (void (__fastcall *)(_QWORD))*((_QWORD *)this + 78);
  *((_DWORD *)this + 44) = v14;
  v15(*((_QWORD *)this + 76));
}
