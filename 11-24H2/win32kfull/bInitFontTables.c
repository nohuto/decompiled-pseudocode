/*
 * XREFs of bInitFontTables @ 0x1403EB0E0
 * Callers:
 *     GrepFontSubSystemInitialize @ 0x140102580 (GrepFontSubSystemInitialize.c)
 * Callees:
 *     ??0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z @ 0x14020703C (--0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z.c)
 *     ?pAllocateAndInitializePFT@@YAPEAVPFT@@I@Z @ 0x140229C38 (-pAllocateAndInitializePFT@@YAPEAVPFT@@I@Z.c)
 *     vQueryRegistryForNumberOfBuckets @ 0x1403EB1E4 (vQueryRegistryForNumberOfBuckets.c)
 */

__int64 __fastcall bInitFontTables(int a1, __int64 a2)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rdi
  struct PFT *v4; // rax
  struct PFT *v5; // rax
  __int64 Semaphore; // rax
  __int64 v7; // rax
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v10 = 0;
  v11 = 0;
  v3 = *(_QWORD **)(W32GetSessionState(a1, a2) + 96);
  vQueryRegistryForNumberOfBuckets(&v10, &v11);
  v4 = pAllocateAndInitializePFT(v10);
  v3[2552] = v4;
  if ( v4 )
  {
    v5 = pAllocateAndInitializePFT(v11);
    v3[2553] = v5;
    if ( v5 )
    {
      Semaphore = GreCreateSemaphore();
      v3[2549] = Semaphore;
      if ( Semaphore )
      {
        v7 = GreCreateSemaphore();
        v3[3005] = v7;
        if ( v7 )
        {
          FHMEMOBJ::FHMEMOBJ((__int64)v9, (_QWORD *)(v3[2552] + 8LL), 0, v10);
          v2 = 1;
          FHMEMOBJ::FHMEMOBJ((__int64)v9, (_QWORD *)v3[2552], 1, v10);
          FHMEMOBJ::FHMEMOBJ((__int64)v9, (_QWORD *)(v3[2552] + 16LL), 2, v10);
        }
      }
    }
  }
  return v2;
}
