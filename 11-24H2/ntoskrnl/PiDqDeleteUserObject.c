/*
 * XREFs of PiDqDeleteUserObject @ 0x140A7EF78
 * Callers:
 *     PiDqDeleteUserObjectFromLoadedHives @ 0x140A9D60C (PiDqDeleteUserObjectFromLoadedHives.c)
 * Callees:
 *     wcsrchr @ 0x1404FDA40 (wcsrchr.c)
 *     _PnpCtxRegDeleteKey @ 0x1406F6960 (_PnpCtxRegDeleteKey.c)
 *     PiDqGetRelativeObjectRegPath @ 0x1408E1294 (PiDqGetRelativeObjectRegPath.c)
 *     _PnpCtxRegDeleteTree @ 0x140A7F11C (_PnpCtxRegDeleteTree.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqDeleteUserObject(__int64 a1, unsigned __int16 *a2, int a3)
{
  int RelativeObjectRegPath; // ebp
  unsigned int v7; // edi
  int v8; // ebx
  unsigned int i; // ebx
  wchar_t *v10; // rax
  PVOID v11; // r8
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  P = 0LL;
  RelativeObjectRegPath = PiDqGetRelativeObjectRegPath(a2, a3, &P);
  if ( RelativeObjectRegPath >= 0 )
  {
    RelativeObjectRegPath = PnpCtxRegDeleteTree(*(_QWORD *)&PiPnpRtlCtx, a1, P);
    v7 = 2;
    v8 = a3 - 1;
    if ( v8 )
    {
      if ( v8 != 2 )
        goto LABEL_2;
      v7 = 1;
    }
    for ( i = 0; i < v7; ++i )
    {
      v10 = wcsrchr((const wchar_t *)P, 0x5Cu);
      if ( v10 )
      {
        v11 = P;
        *v10 = 0;
        if ( (int)PnpCtxRegDeleteKey(*(__int64 *)&PiPnpRtlCtx, a1, (__int64)v11) < 0 )
          break;
      }
    }
  }
LABEL_2:
  if ( P )
    ExFreePoolWithTag(P, 0x58706E50u);
  return (unsigned int)RelativeObjectRegPath;
}
