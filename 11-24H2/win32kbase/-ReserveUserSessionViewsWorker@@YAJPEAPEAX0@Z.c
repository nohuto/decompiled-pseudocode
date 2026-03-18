/*
 * XREFs of ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x14019884C
 * Callers:
 *     ?ReserveUserSessionViews@@YAJPEAPEAX0@Z @ 0x1401987B8 (-ReserveUserSessionViews@@YAJPEAPEAX0@Z.c)
 * Callees:
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     GetDesktopHeapSize @ 0x140198940 (GetDesktopHeapSize.c)
 */

__int64 __fastcall ReserveUserSessionViewsWorker(void **a1, void **a2)
{
  int DesktopHeapSize; // eax
  int v5; // edi
  int v6; // edi
  ULONG_PTR v7; // rdi
  NTSTATUS v8; // eax
  unsigned int v9; // ebx
  void *v10; // rcx
  int v11; // eax
  ULONG_PTR v13; // [rsp+70h] [rbp+18h] BYREF
  ULONG_PTR ViewSize; // [rsp+78h] [rbp+20h] BYREF

  DesktopHeapSize = GetDesktopHeapSize(3LL);
  v5 = GetDesktopHeapSize(2LL) + 10 * DesktopHeapSize;
  v6 = GetDesktopHeapSize(1LL) + v5;
  v7 = (unsigned int)GetDesktopHeapSize(0LL) + v6;
  v13 = v7;
  v8 = MmCreateSection(a1, 983071LL, 0LL, &v13, 4, 0x4000000, 0LL, 0LL);
  v9 = v8;
  if ( v8 < 0 )
  {
    SetLastNtError(v8);
  }
  else
  {
    ObDeleteCapturedInsertInfo(*a1);
    *a2 = 0LL;
    v10 = *a1;
    ViewSize = v7;
    v11 = MmMapViewInSessionSpace(v10, a2, &ViewSize);
    v9 = v11;
    if ( v11 < 0 )
    {
      SetLastNtError(v11);
      ObfDereferenceObject(*a1);
    }
  }
  return v9;
}
