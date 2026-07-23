/*
 * XREFs of KeContextFromKframes @ 0x1403D3460
 * Callers:
 *     KiInitializeUserApc @ 0x1403D2E04 (KiInitializeUserApc.c)
 *     KiDispatchException @ 0x1403D5EB0 (KiDispatchException.c)
 *     KiSaveProcessorState @ 0x1405C7B70 (KiSaveProcessorState.c)
 * Callees:
 *     RtlXSave @ 0x1403D3DF0 (RtlXSave.c)
 *     RtlCopyXStateArea @ 0x1403FFF70 (RtlCopyXStateArea.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall KeContextFromKframes(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // r14
  __int64 v7; // rcx
  int v8; // esi
  _WORD *v9; // r8
  _QWORD *SparePtr; // rcx
  _BYTE *v12; // rdx
  unsigned __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
  {
    v7 = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v7, 1LL);
  }
  v8 = *(_DWORD *)(a3 + 48);
  v9 = (_WORD *)(a1 + 368);
  if ( (v8 & 0x100001) == 0x100001 )
  {
    *(_QWORD *)(a3 + 248) = *(_QWORD *)(a1 + 360);
    *(_WORD *)(a3 + 56) = *v9;
    *(_WORD *)(a3 + 66) = *(_WORD *)(a1 + 392);
    *(_QWORD *)(a3 + 152) = *(_QWORD *)(a1 + 384);
    *(_DWORD *)(a3 + 68) = *(_DWORD *)(a1 + 376);
  }
  if ( (v8 & 0x100004) == 0x100004 )
  {
    *(_DWORD *)(a3 + 58) = 2818091;
    *(_DWORD *)(a3 + 62) = 2818131;
  }
  if ( (v8 & 0x100002) == 0x100002 )
  {
    v9 = (_WORD *)(a1 + 368);
    *(_QWORD *)(a3 + 120) = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a3 + 128) = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a3 + 136) = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a3 + 184) = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a3 + 192) = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a3 + 200) = *(_QWORD *)(a1 + 88);
    *(_QWORD *)(a3 + 208) = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(a3 + 160) = *(_QWORD *)(a1 + 344);
    *(_QWORD *)(a3 + 144) = *(_QWORD *)(a2 + 256);
    *(_QWORD *)(a3 + 176) = *(_QWORD *)(a2 + 264);
    *(_QWORD *)(a3 + 168) = *(_QWORD *)(a2 + 272);
    *(_QWORD *)(a3 + 216) = *(_QWORD *)(a2 + 280);
    *(_QWORD *)(a3 + 224) = *(_QWORD *)(a2 + 288);
    *(_QWORD *)(a3 + 232) = *(_QWORD *)(a2 + 296);
    *(_QWORD *)(a3 + 240) = *(_QWORD *)(a2 + 304);
  }
  if ( (v8 & 0x100040) == 0x100040 )
  {
    if ( (*(_BYTE *)v9 & 1) != 0 )
    {
      _R9 = a3 + *(int *)(a3 + 1248) + 720LL;
      SparePtr = KeGetCurrentThread()->WaitBlock[1].SparePtr;
      if ( !SparePtr )
        goto LABEL_13;
      v17 = (_QWORD *)*SparePtr;
      if ( *SparePtr )
      {
        do
        {
          SparePtr = v17;
          v17 = (_QWORD *)*v17;
        }
        while ( v17 );
      }
      v9 = (_WORD *)SparePtr[5];
      if ( v9 )
      {
        RtlCopyXStateArea(a3 + *(int *)(a3 + 1248) + 720LL, MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFFFFFCuLL);
      }
      else
      {
LABEL_13:
        if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
        {
          *(_QWORD *)(_R9 + 520) |= 0x8000000000000000uLL;
          __asm { xrstors byte ptr [r9] }
          __asm { xsaves  byte ptr [r9] }
        }
        else
        {
          RtlXSave(
            a3 + *(int *)(a3 + 1248) + 720LL,
            (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & 0xFFFFFFFFFFFFFFFCuLL,
            v9);
        }
      }
    }
    v9 = (_WORD *)(a1 + 368);
    *(_DWORD *)(a3 + 52) = *(_DWORD *)(a1 + 44);
    *(_DWORD *)(a3 + 280) = *(_DWORD *)(a1 + 44);
  }
  v12 = v9;
  if ( (v8 & 0x100080) == 0x100080 && (*(_BYTE *)v9 & 1) == 0 )
  {
    v15 = *(_QWORD *)(a1 + 216);
    v16 = a3 + *(int *)(a3 + 1256);
    *(_QWORD *)(v16 + 1232) = *(_QWORD *)v15;
    *(_QWORD *)(v16 + 1240) = *(_QWORD *)(v15 + 8);
    *(_WORD *)(v16 + 1248) = *(_WORD *)(v15 + 16);
    *(_WORD *)(v16 + 1250) = 0;
    *(_DWORD *)(v16 + 1252) = 0;
    v12 = (_BYTE *)(a1 + 368);
  }
  result = v8 & 0x100008;
  if ( (_DWORD)result == 1048584 )
  {
    if ( (*(_BYTE *)v9 & 1) != 0 )
    {
      _fxsave((void *)(a3 + 256));
      v12 = (_BYTE *)(a1 + 368);
    }
    *(_OWORD *)(a3 + 416) = *(_OWORD *)(a1 + 112);
    *(_OWORD *)(a3 + 432) = *(_OWORD *)(a1 + 128);
    *(_OWORD *)(a3 + 448) = *(_OWORD *)(a1 + 144);
    *(_OWORD *)(a3 + 464) = *(_OWORD *)(a1 + 160);
    *(_OWORD *)(a3 + 480) = *(_OWORD *)(a1 + 176);
    *(_OWORD *)(a3 + 496) = *(_OWORD *)(a1 + 192);
    *(_OWORD *)(a3 + 512) = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(a3 + 528) = *(_OWORD *)(a2 + 64);
    *(_OWORD *)(a3 + 544) = *(_OWORD *)(a2 + 80);
    *(_OWORD *)(a3 + 560) = *(_OWORD *)(a2 + 96);
    *(_OWORD *)(a3 + 576) = *(_OWORD *)(a2 + 112);
    *(_OWORD *)(a3 + 592) = *(_OWORD *)(a2 + 128);
    *(_OWORD *)(a3 + 608) = *(_OWORD *)(a2 + 144);
    *(_OWORD *)(a3 + 624) = *(_OWORD *)(a2 + 160);
    *(_OWORD *)(a3 + 640) = *(_OWORD *)(a2 + 176);
    *(_OWORD *)(a3 + 656) = *(_OWORD *)(a2 + 192);
    *(_DWORD *)(a3 + 52) = *(_DWORD *)(a1 + 44);
    result = *(unsigned int *)(a1 + 44);
    *(_DWORD *)(a3 + 280) = result;
  }
  if ( (v8 & 0x100010) == 0x100010 )
  {
    if ( (*(_DWORD *)(a1 + 256) & 0x355LL) != 0 )
    {
      *(_QWORD *)(a3 + 72) = *(_QWORD *)(a1 + 216);
      *(_QWORD *)(a3 + 80) = *(_QWORD *)(a1 + 224);
      *(_QWORD *)(a3 + 88) = *(_QWORD *)(a1 + 232);
      *(_QWORD *)(a3 + 96) = *(_QWORD *)(a1 + 240);
      *(_QWORD *)(a3 + 104) = *(_QWORD *)(a1 + 248);
      v14 = *(_QWORD *)(a1 + 256);
    }
    else
    {
      *(_QWORD *)(a3 + 72) = 0LL;
      v14 = 0LL;
      *(_QWORD *)(a3 + 80) = 0LL;
      *(_QWORD *)(a3 + 88) = 0LL;
      *(_QWORD *)(a3 + 96) = 0LL;
      *(_QWORD *)(a3 + 104) = 0LL;
    }
    *(_QWORD *)(a3 + 112) = v14;
    if ( (*v12 & 1) != 0 )
    {
      result = *(unsigned int *)(a1 + 256);
      if ( (result & 0x100) == 0 )
      {
LABEL_26:
        *(_OWORD *)(a3 + 1200) = 0LL;
        *(_OWORD *)(a3 + 1216) = 0LL;
        goto LABEL_27;
      }
      v12 = (_BYTE *)(a1 + 368);
    }
    else
    {
      result = (unsigned __int64)KeGetCurrentPrcb();
      if ( (*(_DWORD *)(result + 328) & 0x100LL) == 0 )
        goto LABEL_26;
    }
    *(_OWORD *)(a3 + 1200) = *(_OWORD *)(a1 + 272);
    *(_OWORD *)(a3 + 1216) = *(_OWORD *)(a1 + 288);
    if ( (*v12 & 1) != 0 )
    {
      if ( (*(_QWORD *)(a3 + 1200) & 0x7FFFFFFFFFFFFFFFuLL) > 0x7FFFFFFEFFFFLL )
        *(_QWORD *)(a3 + 1200) = 0LL;
      if ( (*(_QWORD *)(a3 + 1208) & 0x7FFFFFFFFFFFFFFFuLL) > 0x7FFFFFFEFFFFLL )
        *(_QWORD *)(a3 + 1208) = 0LL;
      if ( (*(_QWORD *)(a3 + 1216) & 0x7FFFFFFFFFFFFFFFuLL) > 0x7FFFFFFEFFFFLL )
        *(_QWORD *)(a3 + 1216) = 0LL;
      result = *(_QWORD *)(a3 + 1224) & 0x7FFFFFFFFFFFFFFFLL;
      if ( result > 0x7FFFFFFEFFFFLL )
        *(_QWORD *)(a3 + 1224) = 0LL;
    }
  }
LABEL_27:
  if ( !CurrentIrql )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0LL);
    result = 0LL;
    __writecr8(0LL);
  }
  return result;
}
