/*
 * XREFs of NtUserGetAncestor @ 0x1C006FB40
 * Callers:
 *     <none>
 * Callees:
 *     _GetParent @ 0x1C006FC3C (_GetParent.c)
 *     _GetDesktopWindow @ 0x1C00EA360 (_GetDesktopWindow.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetAncestor(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v5; // rax
  __int64 *v6; // rdx
  __int64 *v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 *v10; // r8
  __int64 v11; // rax
  int v12; // edi
  int v14; // edi
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // edi
  __int64 Parent; // rax
  __int64 DesktopWindow; // rax
  __int64 *v20; // rax

  v3 = a2;
  EnterSharedCrit(a1, a2, a3);
  v5 = ValidateHwnd(a1);
  v9 = 0LL;
  v10 = (__int64 *)v5;
  if ( v5 )
  {
    if ( (unsigned int)(v3 - 1) > 2 )
    {
      UserSetLastError(87LL);
      goto LABEL_13;
    }
    v7 = *(__int64 **)(v5 + 24);
    if ( !v7 )
      goto LABEL_11;
    if ( v5 == v7[13] && v3 == 4 )
    {
LABEL_12:
      v9 = *v10;
      goto LABEL_13;
    }
    v11 = v7[1];
    if ( (!v11 || v10 != *(__int64 **)(v11 + 24)) && v10 != (__int64 *)v7[13] )
    {
LABEL_11:
      if ( v10[13] )
      {
        v12 = v3 - 1;
        if ( v12 )
        {
          v14 = v12 - 1;
          if ( v14 )
          {
            v17 = v14 - 1;
            if ( v17 )
            {
              if ( v17 == 1 )
              {
                while ( 1 )
                {
                  v6 = (__int64 *)v10[13];
                  if ( !v6 )
                    break;
                  DesktopWindow = GetDesktopWindow(v10, v6);
                  if ( v6 == (__int64 *)DesktopWindow )
                    break;
                  v7 = (__int64 *)v10[3];
                  v20 = 0LL;
                  if ( v7 )
                    v20 = (__int64 *)v7[13];
                  if ( v10 == v20 )
                    break;
                  v10 = v6;
                }
              }
            }
            else
            {
              while ( 1 )
              {
                Parent = GetParent(v10);
                if ( !Parent )
                  break;
                v10 = (__int64 *)Parent;
              }
            }
          }
          else
          {
            while ( 1 )
            {
              v15 = v10[3];
              v6 = 0LL;
              if ( v15 )
              {
                v16 = *(_QWORD *)(v15 + 8);
                if ( v16 )
                  v6 = *(__int64 **)(v16 + 24);
              }
              v7 = (__int64 *)v10[13];
              if ( v7 == v6 )
                break;
              v6 = 0LL;
              if ( v15 )
                v6 = *(__int64 **)(v15 + 104);
              if ( v7 == v6 )
                break;
              v10 = (__int64 *)v10[13];
            }
          }
        }
        else
        {
          v10 = (__int64 *)v10[13];
        }
        if ( v10 )
          goto LABEL_12;
      }
    }
  }
LABEL_13:
  UserSessionSwitchLeaveCrit(v7, v6, v10, v8);
  return v9;
}
