/*
 * XREFs of PspSetContext @ 0x140988D80
 * Callers:
 *     PspGetSetContextInternal @ 0x1409882C0 (PspGetSetContextInternal.c)
 * Callees:
 *     RtlXRestoreS @ 0x1403FF3D8 (RtlXRestoreS.c)
 *     RtlCopyXStateArea @ 0x1403FFF70 (RtlCopyXStateArea.c)
 *     KiGetAllocatedXSaveArea @ 0x14043A050 (KiGetAllocatedXSaveArea.c)
 */

__int64 __fastcall PspSetContext(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  int v5; // esi
  int v9; // eax
  int v10; // r8d
  int v11; // eax
  int v12; // r8d
  __int64 v13; // rcx
  __int16 v14; // ax
  __int64 result; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v19; // r15
  _QWORD *AllocatedXSaveArea; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax

  v5 = *(_DWORD *)(a3 + 48);
  if ( (v5 & 0x100001) == 0x100001 )
  {
    v9 = *(_DWORD *)(a3 + 68);
    v10 = v9 & 0x210DD5;
    v11 = v9 & 0x250FD5;
    v12 = v10 | 0x200;
    if ( !a4 )
      v12 = v11;
    *(_DWORD *)(a1 + 376) = v12;
    v13 = *(_QWORD *)(a3 + 248);
    *(_QWORD *)(a1 + 360) = v13;
    *(_QWORD *)(a1 + 384) = *(_QWORD *)(a3 + 152);
    if ( a4 == 1 )
    {
      *(_WORD *)(a1 + 392) = 43;
      v14 = 35;
      if ( *(_WORD *)(a3 + 56) == 51 )
        v14 = 51;
      *(_WORD *)(a1 + 368) = v14;
      if ( v14 == 35 )
        v13 = (unsigned int)v13;
      else
        v13 = v13 << 16 >> 16;
    }
    else
    {
      *(_WORD *)(a1 + 392) = 0;
      *(_WORD *)(a1 + 368) = 16;
    }
    *(_QWORD *)(a1 + 360) = v13;
  }
  if ( (v5 & 0x100002) == 0x100002 )
  {
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(a3 + 120);
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(a3 + 128);
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(a3 + 136);
    *(_QWORD *)(a1 + 72) = *(_QWORD *)(a3 + 184);
    *(_QWORD *)(a1 + 80) = *(_QWORD *)(a3 + 192);
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(a3 + 200);
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(a3 + 208);
    **(_QWORD **)(a2 + 152) = *(_QWORD *)(a3 + 144);
    **(_QWORD **)(a2 + 168) = *(_QWORD *)(a3 + 160);
    **(_QWORD **)(a2 + 176) = *(_QWORD *)(a3 + 168);
    **(_QWORD **)(a2 + 184) = *(_QWORD *)(a3 + 176);
    **(_QWORD **)(a2 + 224) = *(_QWORD *)(a3 + 216);
    **(_QWORD **)(a2 + 232) = *(_QWORD *)(a3 + 224);
    **(_QWORD **)(a2 + 240) = *(_QWORD *)(a3 + 232);
    **(_QWORD **)(a2 + 248) = *(_QWORD *)(a3 + 240);
  }
  if ( (v5 & 0x100040) == 0x100040 && a4 == 1 )
  {
    v19 = *(int *)(a3 + 1248);
    AllocatedXSaveArea = KiGetAllocatedXSaveArea((__int64)KeGetCurrentThread());
    if ( AllocatedXSaveArea )
      RtlCopyXStateArea((__int64)AllocatedXSaveArea, MEMORY[0xFFFFF780000003E0] & 0xFFFFFFFFFFFFFFFCuLL, v19 + a3 + 720);
    else
      RtlXRestoreS(v19 + a3 + 720, (MEMORY[0xFFFFF780000003E0] | MEMORY[0xFFFFF78000000708]) & 0xFFFFFFFFFFFFFFFCuLL);
  }
  result = v5 & 0x100008;
  if ( (_DWORD)result == 1048584 )
  {
    *(_OWORD *)(a1 + 112) = *(_OWORD *)(a3 + 416);
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(a3 + 432);
    *(_OWORD *)(a1 + 144) = *(_OWORD *)(a3 + 448);
    *(_OWORD *)(a1 + 160) = *(_OWORD *)(a3 + 464);
    *(_OWORD *)(a1 + 176) = *(_OWORD *)(a3 + 480);
    *(_OWORD *)(a1 + 192) = *(_OWORD *)(a3 + 496);
    *(_OWORD *)*(_QWORD *)(a2 + 48) = *(_OWORD *)(a3 + 512);
    *(_OWORD *)*(_QWORD *)(a2 + 56) = *(_OWORD *)(a3 + 528);
    *(_OWORD *)*(_QWORD *)(a2 + 64) = *(_OWORD *)(a3 + 544);
    *(_OWORD *)*(_QWORD *)(a2 + 72) = *(_OWORD *)(a3 + 560);
    *(_OWORD *)*(_QWORD *)(a2 + 80) = *(_OWORD *)(a3 + 576);
    *(_OWORD *)*(_QWORD *)(a2 + 88) = *(_OWORD *)(a3 + 592);
    *(_OWORD *)*(_QWORD *)(a2 + 96) = *(_OWORD *)(a3 + 608);
    *(_OWORD *)*(_QWORD *)(a2 + 104) = *(_OWORD *)(a3 + 624);
    *(_OWORD *)*(_QWORD *)(a2 + 112) = *(_OWORD *)(a3 + 640);
    *(_OWORD *)*(_QWORD *)(a2 + 120) = *(_OWORD *)(a3 + 656);
    *(_DWORD *)(a1 + 44) = KiMxCsrMask & *(_DWORD *)(a3 + 52);
    *(_DWORD *)(a3 + 280) = _mm_getcsr();
    result = 7999LL;
    *(_WORD *)(a3 + 256) &= 0x1F3Fu;
  }
  if ( (v5 & 0x100010) == 0x100010 )
  {
    v16 = *(_QWORD *)(a3 + 72);
    if ( a4 )
    {
      if ( v16 > 0x7FFFFFFEFFFFLL )
        v16 = 0LL;
      *(_QWORD *)(a1 + 216) = v16;
      v21 = *(_QWORD *)(a3 + 80);
      if ( v21 > 0x7FFFFFFEFFFFLL )
        v21 = 0LL;
      *(_QWORD *)(a1 + 224) = v21;
      v22 = *(_QWORD *)(a3 + 88);
      if ( v22 > 0x7FFFFFFEFFFFLL )
        v22 = 0LL;
      *(_QWORD *)(a1 + 232) = v22;
      v17 = *(_QWORD *)(a3 + 96);
      if ( v17 > 0x7FFFFFFEFFFFLL )
        v17 = 0LL;
    }
    else
    {
      *(_QWORD *)(a1 + 216) = v16;
      *(_QWORD *)(a1 + 224) = *(_QWORD *)(a3 + 80);
      *(_QWORD *)(a1 + 232) = *(_QWORD *)(a3 + 88);
      v17 = *(_QWORD *)(a3 + 96);
    }
    *(_QWORD *)(a1 + 240) = v17;
    *(_QWORD *)(a1 + 248) = 0LL;
    result = *(_DWORD *)(a3 + 112) & 0xFFFF0355;
    *(_QWORD *)(a1 + 256) = result;
    if ( a4 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (result & 0x355) != 0 )
        _interlockedbittestandset(&CurrentThread->Header.Lock, 0x18u);
      else
        _interlockedbittestandreset(&CurrentThread->Header.Lock, 0x18u);
    }
  }
  return result;
}
