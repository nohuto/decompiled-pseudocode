/*
 * XREFs of KeDisconnectInterrupt @ 0x1404448BC
 * Callers:
 *     KeConnectInterrupt @ 0x14020274C (KeConnectInterrupt.c)
 *     IoDisconnectInterrupt @ 0x1409A2700 (IoDisconnectInterrupt.c)
 * Callees:
 *     KeMaskInterrupt @ 0x14020254C (KeMaskInterrupt.c)
 *     KiIsInterruptTypeSecondary @ 0x140202718 (KiIsInterruptTypeSecondary.c)
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x140204644 (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x140204704 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     KiDisconnectInterruptCommon @ 0x1404449DC (KiDisconnectInterruptCommon.c)
 *     KiDisconnectSecondaryInterrupt @ 0x140444EC8 (KiDisconnectSecondaryInterrupt.c)
 *     KiIntSteerDisable @ 0x140446830 (KiIntSteerDisable.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KeDisconnectInterrupt(__int64 *a1, unsigned __int8 a2, _DWORD *a3)
{
  __int64 v3; // rbx
  __int64 *v5; // rdi
  unsigned int v6; // esi
  char IsInterruptTypeSecondary; // r13
  __int64 v8; // rbp
  int v9; // r8d
  __int64 *v10; // r14
  __int64 v11; // r15
  __int64 v12; // rbx
  int v13; // eax
  void *v14; // rcx
  __int64 v16; // rdx
  int v17; // [rsp+58h] [rbp+10h] BYREF

  v3 = a2;
  v5 = a1;
  v6 = 0;
  KeMaskInterrupt(a1, a2, (__int64)a3, 0LL);
  IsInterruptTypeSecondary = KiIsInterruptTypeSecondary(a3);
  v8 = (unsigned int)v3;
  KiIntSteerDisable(v5, (unsigned int)v3);
  KiSetSystemPriorityThread((ULONG_PTR)KeGetCurrentThread(), 31, v9);
  if ( (_BYTE)v3 )
  {
    v10 = v5;
    v11 = (unsigned int)v3;
    do
    {
      v12 = *v10;
      if ( IsInterruptTypeSecondary )
        v13 = KiDisconnectSecondaryInterrupt(*v10, a3);
      else
        v13 = KiDisconnectInterruptCommon(0LL, *v10, a3);
      _InterlockedOr((volatile signed __int32 *)(v12 + 104), 1u);
      if ( v13 < 0 )
      {
        v6 = v13;
      }
      else if ( v13 == 296 )
      {
        v6 = 296;
      }
      ++v10;
      --v11;
    }
    while ( v11 );
    v3 = v8;
  }
  v17 = 31;
  KiClearSystemPriority((ULONG_PTR)KeGetCurrentThread(), &v17);
  v14 = *(void **)(*v5 + 272);
  if ( v14 )
  {
    if ( (_DWORD)v8 )
    {
      do
      {
        v16 = *v5++;
        *(_QWORD *)(v16 + 272) = 0LL;
        --v3;
      }
      while ( v3 );
    }
    ExFreePoolWithTag(v14, 0x5249654Bu);
  }
  return v6;
}
