/*
 * XREFs of ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1401B2FF8
 * Callers:
 *     SetGestureConfigSettings @ 0x1401B2654 (SetGestureConfigSettings.c)
 *     _RegisterShellHookWindow @ 0x1401B2F80 (_RegisterShellHookWindow.c)
 *     _ChangeWindowMessageFilterEx @ 0x14024ED84 (_ChangeWindowMessageFilterEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VWPLAddBase(struct tagVWPL **a1, __int64 a2, struct tagWND *a3, unsigned int a4)
{
  unsigned int *v4; // rax
  unsigned __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // r8d
  struct tagWND **v13; // rdx
  unsigned int v14; // edx
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx

  v4 = (unsigned int *)*a1;
  if ( *a1 )
  {
    if ( !v4[3] )
    {
      v11 = *v4;
      v12 = 0;
      if ( (_DWORD)v11 )
      {
        v13 = (struct tagWND **)(v4 + 6);
        while ( a3 != *v13 )
        {
          ++v12;
          v13 += 2;
          if ( v12 >= (unsigned int)v11 )
            goto LABEL_11;
        }
      }
      else
      {
LABEL_11:
        v14 = v4[1];
        if ( (unsigned int)v11 < v14 )
        {
LABEL_19:
          v19 = 2 * v11;
          *(_QWORD *)&v4[2 * v19 + 6] = a3;
          *(_QWORD *)&v4[2 * v19 + 4] = a2;
          ++*v4;
          return 1LL;
        }
        v15 = 16LL * v14;
        if ( v15 <= 0xFFFFFFFF )
        {
          v16 = (unsigned int)(v15 + 16);
          if ( (unsigned int)v15 < 0xFFFFFFF0 )
          {
            v17 = 16LL * v4[2];
            if ( v17 <= 0xFFFFFFFF )
            {
              v18 = (unsigned int)(v16 + v17);
              if ( (unsigned int)v18 >= (unsigned int)v16 )
              {
                v4 = (unsigned int *)UserReAllocPool(v4, v16, v18, 1819702101LL);
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
    if ( v9 <= 0xFFFFFFFF )
    {
      v10 = v9 + 16;
      if ( v10 >= 0x10 )
      {
        v4 = (unsigned int *)Win32AllocPoolZInit(v10, 1819702101LL);
        if ( v4 )
        {
          *v4 = 0;
          v4[3] = 0;
          v4[1] = a4;
          v4[2] = a4;
LABEL_18:
          *a1 = (struct tagVWPL *)v4;
          v11 = *v4;
          goto LABEL_19;
        }
      }
    }
  }
  return 0LL;
}
