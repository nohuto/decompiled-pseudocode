/*
 * XREFs of ?TransformShellProvidedRectangle@@YAXPEBUtagWND@@AEBUtagPOINT@@1PEAUtagMONITOR@@W4FrameBoundsOverlapInfo@@PEAUtagRECT@@@Z @ 0x140186FEC
 * Callers:
 *     ?xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind@@PEAUtagRECT@@@Z @ 0x140187530 (-xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402A9B34 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 * Callees:
 *     ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014AC60 (-ExtendRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 */

__int64 TransformShellProvidedRectangle(__int64 a1, int *a2, int *a3, ...)
{
  int v3; // ebp
  int v4; // r15d
  struct tagWND *v6; // rdi
  int v7; // esi
  int v8; // r14d
  struct tagRECT *v9; // rax
  char v10; // r8
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  __int64 result; // rax
  int v15; // ecx
  int v16; // edx
  struct tagRECT v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  __int64 v20; // [rsp+70h] [rbp+28h]
  struct tagWND *v21; // [rsp+78h] [rbp+30h]
  va_list va1; // [rsp+80h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v18 = va_arg(va1, _QWORD);
  v20 = va_arg(va1, _QWORD);
  v21 = va_arg(va1, struct tagWND *);
  v3 = *a3;
  v4 = a3[1];
  v6 = v21;
  v7 = *a2;
  v8 = a2[1];
  PhysicalToLogicalDPIRect(v21, v21, *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL), (__int64 *)va);
  v9 = WindowMargins::ExtendRect(
         &v17,
         (struct tagRECT *)a1,
         v6,
         (const struct tagRECT *)*(unsigned __int16 *)(*(_QWORD *)(v18 + 40) + 60LL));
  v10 = v20;
  *(struct tagRECT *)v6 = *v9;
  v11 = *((_DWORD *)v6 + 2);
  v12 = *(_DWORD *)v6;
  v13 = v11 - *(_DWORD *)v6;
  if ( (v10 & 1) != 0 )
  {
    if ( v13 < v3 )
    {
      v11 = v12 + v3;
      *((_DWORD *)v6 + 2) = v12 + v3;
    }
    if ( v13 >= v7 )
    {
      v11 = v12 + v7;
      *((_DWORD *)v6 + 2) = v12 + v7;
    }
  }
  if ( (v10 & 4) != 0 )
  {
    if ( v13 < v3 )
      *(_DWORD *)v6 = v11 - v3;
    if ( v13 >= v7 )
      *(_DWORD *)v6 = v11 - v7;
  }
  result = *((unsigned int *)v6 + 3);
  v15 = *((_DWORD *)v6 + 1);
  v16 = *((_DWORD *)v6 + 3) - v15;
  if ( v16 < v4 )
  {
    if ( (v10 & 2) != 0 )
    {
      result = (unsigned int)(v15 + v4);
      *((_DWORD *)v6 + 3) = result;
    }
    else
    {
      v15 = result - v4;
      *((_DWORD *)v6 + 1) = result - v4;
    }
  }
  if ( v16 >= v8 )
  {
    if ( (v10 & 2) != 0 )
    {
      result = (unsigned int)(v15 + v8);
      *((_DWORD *)v6 + 3) = result;
    }
    else
    {
      result = (unsigned int)(result - v8);
      *((_DWORD *)v6 + 1) = result;
    }
  }
  return result;
}
