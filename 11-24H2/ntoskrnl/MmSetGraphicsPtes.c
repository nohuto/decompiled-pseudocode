/*
 * XREFs of MmSetGraphicsPtes @ 0x1407EBEE0
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockAweVadsExclusive @ 0x14026783C (MiUnlockAweVadsExclusive.c)
 *     MiLockAweVadsExclusive @ 0x14026788C (MiLockAweVadsExclusive.c)
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     MiGetVadPageSize @ 0x14041B130 (MiGetVadPageSize.c)
 *     MiSetGraphicsPtes @ 0x140673868 (MiSetGraphicsPtes.c)
 *     MiGetAwePageSizeFromVa @ 0x140683714 (MiGetAwePageSizeFromVa.c)
 */

__int64 __fastcall MmSetGraphicsPtes(
        unsigned __int64 a1,
        unsigned __int64 a2,
        ULONG_PTR *a3,
        unsigned __int64 a4,
        int a5,
        int a6)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 v7; // rbx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  int v14; // r14d
  __int64 v15; // rax
  void *v16; // rbp
  int v18; // edx
  unsigned int v19; // ebx
  __int64 AwePageSizeFromVa; // rcx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rax
  unsigned __int64 i; // rdx
  int v25; // [rsp+20h] [rbp-38h]
  unsigned int v26; // [rsp+60h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v7 = a1 + a2 - 1;
  if ( v7 > a1 )
  {
    v12 = a2 - 1;
    v13 = v7;
    if ( !a2 )
      v13 = a1;
    if ( v13 >= a1
      && a1 + (v12 & -(__int64)(a2 != 0)) <= 0x7FFFFFFEFFFFLL
      && v7 + (v12 & -(__int64)(a2 != 0)) >= v7
      && v7 + (v12 & -(__int64)(a2 != 0)) <= 0x7FFFFFFEFFFFLL )
    {
      v26 = 0;
      v14 = 0;
      v15 = MiObtainReferencedVadEx(a1, 0LL, (int *)&v26, a4);
      v16 = (void *)v15;
      if ( !v15 )
        return v26;
      v18 = *(_DWORD *)(v15 + 48);
      if ( (v18 & 0x4200000) == 0x4200000 )
      {
        if ( v7 > (((*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32)) << 12) | 0xFFF) )
        {
          v19 = -1073741584;
LABEL_40:
          MiUnlockAndDereferenceVad(v16);
          return v19;
        }
        if ( (v18 & 0x70) == 0x30 )
        {
          v14 = 1;
          MiLockAweVadsExclusive((__int64)CurrentThread);
          AwePageSizeFromVa = MiGetAwePageSizeFromVa(a1);
          if ( !AwePageSizeFromVa )
          {
            v19 = -1073741585;
LABEL_38:
            MiUnlockAweVadsExclusive((__int64)CurrentThread);
            goto LABEL_40;
          }
LABEL_18:
          if ( (a6 & 0xFFFFFFFE) != 0 )
          {
            v19 = -1073741580;
          }
          else if ( a5 )
          {
            v19 = -1073741581;
          }
          else
          {
            v21 = AwePageSizeFromVa << 12;
            if ( a4 == v21 )
            {
              v22 = v21 - 1;
              if ( ((v21 - 1) & a1) != 0 || (v22 & a2) != 0 )
              {
                v19 = -1073741585;
              }
              else
              {
                if ( a3 )
                {
                  if ( (a6 & 1) != 0 )
                    v23 = 1LL;
                  else
                    v23 = a2 / v21;
                  for ( i = 0LL; i < v23; ++i )
                  {
                    if ( (v22 & a3[i]) != 0 )
                    {
                      v19 = -1073741583;
                      goto LABEL_37;
                    }
                  }
                }
                v19 = MiSetGraphicsPtes(a1, a2, a3, a4, v25, a6);
              }
            }
            else
            {
              v19 = -1073741582;
            }
          }
LABEL_37:
          if ( !v14 )
            goto LABEL_40;
          goto LABEL_38;
        }
        if ( (v18 & 0xA00000) == 0xA00000 )
        {
          AwePageSizeFromVa = MiGetVadPageSize(v15);
          goto LABEL_18;
        }
      }
      v19 = -1073741585;
      goto LABEL_40;
    }
  }
  return 3221225485LL;
}
