/*
 * XREFs of KeDisconnectInterrupt @ 0x1403B8A3C
 * Callers:
 *     KeConnectInterrupt @ 0x1403B6EEC (KeConnectInterrupt.c)
 *     IoDisconnectInterrupt @ 0x140A121C0 (IoDisconnectInterrupt.c)
 * Callees:
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x1403B6408 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x1403B6558 (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     KeMaskInterrupt @ 0x1403B748C (KeMaskInterrupt.c)
 *     KiIsInterruptTypeSecondary @ 0x1403B764C (KiIsInterruptTypeSecondary.c)
 *     KiDisconnectInterruptCommon @ 0x1403B8B5C (KiDisconnectInterruptCommon.c)
 *     KiDisconnectSecondaryInterrupt @ 0x1403B9038 (KiDisconnectSecondaryInterrupt.c)
 *     KiIntSteerDisable @ 0x1403BA9C0 (KiIntSteerDisable.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KeDisconnectInterrupt(__int64 *a1, unsigned __int8 a2, _DWORD *a3)
{
  __int64 v3; // rbx
  __int64 *v5; // rdi
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  char IsInterruptTypeSecondary; // r13
  __int64 v11; // rbp
  int v12; // r8d
  __int64 *v13; // r14
  __int64 v14; // r15
  __int64 v15; // rbx
  int v16; // eax
  void *v17; // rcx
  __int64 v19; // rdx
  int v20; // [rsp+58h] [rbp+10h] BYREF

  v3 = a2;
  v5 = a1;
  v6 = 0;
  KeMaskInterrupt(a1, a2, (__int64)a3, 0LL);
  IsInterruptTypeSecondary = KiIsInterruptTypeSecondary(a3, v7, v8, v9);
  v11 = (unsigned int)v3;
  KiIntSteerDisable(v5, (unsigned int)v3);
  KiSetSystemPriorityThread(KeGetCurrentThread(), 31, v12);
  if ( (_BYTE)v3 )
  {
    v13 = v5;
    v14 = (unsigned int)v3;
    do
    {
      v15 = *v13;
      if ( IsInterruptTypeSecondary )
        v16 = KiDisconnectSecondaryInterrupt(*v13, a3);
      else
        v16 = KiDisconnectInterruptCommon(0LL, *v13, a3);
      _InterlockedOr((volatile signed __int32 *)(v15 + 104), 1u);
      if ( v16 < 0 )
      {
        v6 = v16;
      }
      else if ( v16 == 296 )
      {
        v6 = 296;
      }
      ++v13;
      --v14;
    }
    while ( v14 );
    v3 = v11;
  }
  v20 = 31;
  KiClearSystemPriority(KeGetCurrentThread(), &v20);
  v17 = *(void **)(*v5 + 272);
  if ( v17 )
  {
    if ( (_DWORD)v11 )
    {
      do
      {
        v19 = *v5++;
        *(_QWORD *)(v19 + 272) = 0LL;
        --v3;
      }
      while ( v3 );
    }
    ExFreePoolWithTag(v17, 0x5249654Bu);
  }
  return v6;
}
