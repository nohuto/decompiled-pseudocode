/*
 * XREFs of _GetAncestor @ 0x1C003B268
 * Callers:
 *     NtUserShutdownBlockReasonCreate @ 0x1C003B0B0 (NtUserShutdownBlockReasonCreate.c)
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z @ 0x1C0041524 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z.c)
 *     HasMessageRootWindow @ 0x1C01F2458 (HasMessageRootWindow.c)
 * Callees:
 *     _GetParent @ 0x1C006FC3C (_GetParent.c)
 *     _GetDesktopWindow @ 0x1C00EA360 (_GetDesktopWindow.c)
 */

__int64 __fastcall GetAncestor(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 DesktopWindow; // rax
  int v6; // edx
  __int64 v7; // r10
  __int64 v8; // rax
  int v9; // edx
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 Parent; // rax
  __int64 v21; // rcx
  __int64 v22; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v3 = 0LL;
  v4 = a1;
  if ( v2 )
    v3 = *(_QWORD *)(v2 + 104);
  if ( a1 == v3 && (_DWORD)a2 == 4 )
    return v4;
  DesktopWindow = GetDesktopWindow(a1, a2);
  if ( v4 != DesktopWindow )
  {
    v8 = 0LL;
    if ( v7 )
      v8 = *(_QWORD *)(v7 + 104);
    if ( v4 != v8 && *(_QWORD *)(v4 + 104) )
    {
      v9 = v6 - 1;
      if ( !v9 )
        return *(_QWORD *)(v4 + 104);
      v11 = v9 - 1;
      if ( v11 )
      {
        v14 = v11 - 1;
        if ( v14 )
        {
          if ( v14 == 1 )
          {
            while ( 1 )
            {
              v15 = *(_QWORD *)(v4 + 104);
              if ( !v15 )
                break;
              v16 = GetDesktopWindow(v4, v15);
              if ( v17 == v16 )
                break;
              v18 = *(_QWORD *)(v4 + 24);
              v19 = 0LL;
              if ( v18 )
                v19 = *(_QWORD *)(v18 + 104);
              if ( v4 == v19 )
                break;
              v4 = v17;
            }
          }
        }
        else
        {
          while ( 1 )
          {
            Parent = GetParent(v4);
            if ( !Parent )
              break;
            v4 = Parent;
          }
        }
      }
      else
      {
        while ( 1 )
        {
          v12 = GetDesktopWindow(v4, *(_QWORD *)(v4 + 104));
          if ( v13 == v12 )
            break;
          v21 = *(_QWORD *)(v4 + 24);
          v22 = 0LL;
          if ( v21 )
            v22 = *(_QWORD *)(v21 + 104);
          if ( v13 == v22 )
            break;
          v4 = v13;
        }
      }
      return v4;
    }
  }
  return 0LL;
}
