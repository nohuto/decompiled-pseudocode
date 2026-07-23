/*
 * XREFs of KiProcessControlProtectionFromKernelMode @ 0x14043466C
 * Callers:
 *     KiProcessControlProtection @ 0x140434290 (KiProcessControlProtection.c)
 * Callees:
 *     VslKernelShadowStackAssist @ 0x1403A9EE0 (VslKernelShadowStackAssist.c)
 *     KiFixupControlProtectionKernelModeReturnMismatch @ 0x1405C41B8 (KiFixupControlProtectionKernelModeReturnMismatch.c)
 *     KiGetCurrentKernelShadowStackBounds @ 0x1405C42FC (KiGetCurrentKernelShadowStackBounds.c)
 *     KiLogControlProtectionKernelModeReturnMismatch @ 0x1405C4414 (KiLogControlProtectionKernelModeReturnMismatch.c)
 */

__int64 __fastcall KiProcessControlProtectionFromKernelMode(__int64 a1)
{
  __int64 v1; // rax
  int v2; // ebx
  unsigned int v5; // ebp
  unsigned __int64 v6; // r14
  int CurrentKernelShadowStackBounds; // eax
  __int64 v8; // rdx
  int v9; // r10d
  __int64 v10; // rcx
  _QWORD *v11; // r9
  int v12; // eax
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  _QWORD v17[2]; // [rsp+30h] [rbp-38h] BYREF
  int v18; // [rsp+40h] [rbp-28h]
  __int64 v19; // [rsp+44h] [rbp-24h]
  int v20; // [rsp+4Ch] [rbp-1Ch]
  unsigned __int64 v21; // [rsp+70h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 352);
  v2 = 0;
  v21 = 0LL;
  __asm { rdsspq  rdi }
  v5 = 2;
  if ( (unsigned __int64)(v1 - 1) <= 1 && (_RDI & 7) == 0 )
  {
    v6 = **(_QWORD **)(a1 + 384);
    if ( v6 >= 0xFFFF800000000000uLL )
    {
      CurrentKernelShadowStackBounds = KiGetCurrentKernelShadowStackBounds(&v21);
      v8 = *(_QWORD *)(a1 + 216);
      v9 = CurrentKernelShadowStackBounds;
      v10 = *(_QWORD *)(a1 + 352);
      v11 = (_QWORD *)(v8 + 24);
      while ( 1 )
      {
        ++v11;
        if ( v10 != 1 || (unsigned __int64)v11 >= v21 )
          break;
        if ( *v11 >= 0x10000uLL && *v11 == v6 )
        {
          v12 = VslKernelShadowStackAssist(0, v8, 0LL, (__int64)v11, 0LL, 4);
          _InterlockedIncrement(&dword_140FC80F8);
          return ((v12 >> 31) & 1u) + 1;
        }
      }
      v13 = 0LL;
      if ( (_BYTE)KiKernelCetAuditModeEnabled )
      {
        v14 = (KeGetCurrentThread()->KernelShadowStackLimit.AllFields & 0xFFFFFFFFFFFFF000uLL) + 4096;
        if ( _RDI >= v14 && _RDI <= v14 + 640 )
          v13 = _RDI + 2048;
        if ( (int)KiFixupControlProtectionKernelModeReturnMismatch(v9, v8, v6, v13, v10 == 2) >= 0 )
        {
          v15 = *(_QWORD *)(a1 + 360);
          v19 = 0LL;
          v17[0] = v15;
          LODWORD(v15) = *(_DWORD *)(a1 + 352);
          LOBYTE(v2) = v13 != 0;
          v20 = v2;
          v17[1] = v6;
          v18 = v15;
          KiLogControlProtectionKernelModeReturnMismatch(1LL, v17);
          return 1;
        }
      }
    }
  }
  return v5;
}
