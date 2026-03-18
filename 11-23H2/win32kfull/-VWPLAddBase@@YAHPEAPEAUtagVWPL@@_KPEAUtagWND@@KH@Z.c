/*
 * XREFs of ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C0042BA8
 * Callers:
 *     _ChangeWindowMessageFilterEx @ 0x1C0035668 (_ChangeWindowMessageFilterEx.c)
 *     SetGestureConfigSettings @ 0x1C003716C (SetGestureConfigSettings.c)
 *     _RegisterShellHookWindow @ 0x1C0095D74 (_RegisterShellHookWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VWPLAddBase(struct tagVWPL **a1, __int64 a2, struct tagWND *a3, unsigned int a4)
{
  unsigned int *v4; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // r8d
  struct tagWND **v12; // rdx
  unsigned int v13; // edx
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx

  v4 = (unsigned int *)*a1;
  if ( *a1 )
  {
    if ( !v4[3] )
    {
      v10 = *v4;
      v11 = 0;
      if ( (_DWORD)v10 )
      {
        v12 = (struct tagWND **)(v4 + 6);
        while ( a3 != *v12 )
        {
          ++v11;
          v12 += 2;
          if ( v11 >= (unsigned int)v10 )
            goto LABEL_11;
        }
      }
      else
      {
LABEL_11:
        v13 = v4[1];
        if ( (unsigned int)v10 < v13 )
        {
LABEL_19:
          v18 = 2 * v10;
          *(_QWORD *)&v4[2 * v18 + 6] = a3;
          *(_QWORD *)&v4[2 * v18 + 4] = a2;
          ++*v4;
          return 1LL;
        }
        v14 = 16LL * v13;
        if ( v14 <= 0xFFFFFFFF )
        {
          v15 = (unsigned int)(v14 + 16);
          if ( (unsigned int)v14 < 0xFFFFFFF0 )
          {
            v16 = 16LL * v4[2];
            if ( v16 <= 0xFFFFFFFF )
            {
              v17 = (unsigned int)(v15 + v16);
              if ( (unsigned int)v17 >= (unsigned int)v15 )
              {
                v4 = (unsigned int *)UserReAllocPool(v4, v15, v17, 1819702101LL);
                if ( v4 )
                {
                  v4[1] += v4[2];
                  goto LABEL_18;
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    v9 = 16LL * a4;
    if ( v9 <= 0xFFFFFFFF && (unsigned int)v9 < 0xFFFFFFF0 )
    {
      v4 = (unsigned int *)Win32AllocPoolZInit((unsigned int)(v9 + 16), 1819702101LL);
      if ( v4 )
      {
        *v4 = 0;
        v4[3] = 0;
        v4[1] = a4;
        v4[2] = a4;
LABEL_18:
        *a1 = (struct tagVWPL *)v4;
        v10 = *v4;
        goto LABEL_19;
      }
    }
  }
  return 0LL;
}
