/*
 * XREFs of MiShadowTopLevelPxes @ 0x140393EB0
 * Callers:
 *     MiCopyTopLevelMappings @ 0x140393D4C (MiCopyTopLevelMappings.c)
 *     MiReplicatePteChangeToProcess @ 0x14068D440 (MiReplicatePteChangeToProcess.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 *     MiTransformValidPteInPlace @ 0x14039404C (MiTransformValidPteInPlace.c)
 */

char __fastcall MiShadowTopLevelPxes(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rax
  unsigned int v5; // ebp
  __int64 v6; // r12
  unsigned __int64 KernelWaitTime; // r13
  __int64 v8; // rsi
  ULONG_PTR *v9; // rdi
  ULONG_PTR v10; // rbx
  char v11; // al
  unsigned __int64 v12; // rcx
  int v13; // r15d

  LOBYTE(v3) = 0;
  v5 = a2;
  if ( (MiFlags & 0x600000) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 1288);
    if ( v6 )
    {
      LOBYTE(v3) = (_BYTE)PsInitialSystemProcess;
      if ( PsInitialSystemProcess )
      {
        KernelWaitTime = PsInitialSystemProcess[2].KernelWaitTime;
        v8 = (a2 >> 3) & 0x1FF;
        do
        {
          LOBYTE(v3) = _bittest64(qword_140E2F08C, (unsigned int)(v8 - 256));
          if ( (_BYTE)v3 )
          {
            v9 = (ULONG_PTR *)(v6 + 8 * v8);
            v10 = MI_READ_PTE_LOCK_FREE(KernelWaitTime + 8 * v8);
            v3 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v9);
            if ( v10 != v3 )
            {
              v11 = MI_READ_PTE_LOCK_FREE(v6 + 8 * v8);
              v12 = v6 + 8 * v8;
              if ( (v11 & 1) != 0 )
              {
                LOBYTE(v3) = MiTransformValidPteInPlace(v12, v5, v10, 96, 3);
              }
              else
              {
                v13 = 0;
                LODWORD(v3) = MiPteInShadowRange(v12);
                if ( (_DWORD)v3 )
                {
                  LODWORD(v3) = MiSanitizeShadowPxe();
                  v13 = v3;
                }
                if ( _bittest64(&MiFlags, 0x24u) )
                {
                  if ( (v10 & 0x20) == 0 )
                  {
                    LOBYTE(v3) = 0;
                    if ( (unsigned __int64)v9 >= 0xFFFFF6C000000000uLL )
                      LOBYTE(v3) = MiCheckLinearProtectedPteAccessedBit(v6 + 8 * v8, v10, 128);
                  }
                }
                *v9 = v10;
                if ( v13 )
                  LOBYTE(v3) = MiWritePteShadow();
              }
            }
          }
          v5 += 8;
          v8 = (unsigned int)(v8 + 1);
          --a3;
        }
        while ( a3 );
      }
    }
  }
  return v3;
}
