/*
 * XREFs of RtlGetFullPathName_UstrEx @ 0x1800A3020
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x180016E20 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlDosSearchPath_Ustr @ 0x1800A2650 (RtlDosSearchPath_Ustr.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlGetFullPathName_Ustr @ 0x180017680 (RtlGetFullPathName_Ustr.c)
 *     RtlpAllocateAtom @ 0x18004C160 (RtlpAllocateAtom.c)
 */

__int64 __fastcall RtlGetFullPathName_UstrEx(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        _BYTE *a6,
        _DWORD *a7,
        _QWORD *a8)
{
  __int64 v11; // rbp
  _QWORD *v12; // rsi
  __int64 *v13; // rdi
  _DWORD *v14; // r14
  __int64 v15; // r12
  unsigned __int16 v16; // ax
  _WORD *v17; // r8
  unsigned int FullPathName_Ustr; // eax
  unsigned int v19; // r13d
  unsigned int v20; // ebx
  __int64 result; // rax
  __int64 v22; // rax
  __int64 v23; // r15
  unsigned __int64 v24; // r13
  _WORD *Atom; // rax
  unsigned int v26; // eax
  __int16 v27; // cx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v32; // [rsp+88h] [rbp+10h] BYREF
  __int64 v33; // [rsp+90h] [rbp+18h]
  __int64 v34; // [rsp+98h] [rbp+20h] BYREF

  v33 = a3;
  v32 = 0LL;
  v34 = 0LL;
  v11 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v12 = a8;
  if ( a8 )
    *a8 = 0LL;
  v13 = (__int64 *)a5;
  if ( a5 )
    *(_QWORD *)a5 = 0LL;
  v14 = a7;
  v15 = 0LL;
  LODWORD(v34) = *a7;
  if ( a2 )
  {
    if ( a3 && !a4 )
    {
      v20 = -1073741811;
      goto LABEL_22;
    }
    v16 = *(_WORD *)(a2 + 2);
    v17 = *(_WORD **)(a2 + 8);
    a5 = v16;
LABEL_11:
    LODWORD(a8) = v16;
    FullPathName_Ustr = RtlGetFullPathName_Ustr(a1, v16, v17, &v32, a6, &v34);
    v19 = FullPathName_Ustr;
    if ( FullPathName_Ustr )
    {
      if ( a2 && FullPathName_Ustr < (unsigned int)a8 )
      {
        *(_WORD *)a2 = FullPathName_Ustr;
        if ( v13 )
        {
          if ( v32 )
            v28 = (v32 - *(_QWORD *)(a2 + 8)) >> 1;
          else
            v28 = 0LL;
          *v13 = v28;
        }
        if ( a4 )
          *a4 = a2;
        v20 = 0;
      }
      else
      {
        v23 = v33;
        if ( v33 )
        {
          if ( v11 && FullPathName_Ustr < (unsigned int)a8 )
          {
            *(_WORD *)(v33 + 2) = a5;
            *(_WORD *)v23 = FullPathName_Ustr;
            *(_WORD *)(v11 + 2 * ((unsigned __int64)FullPathName_Ustr >> 1)) = 0;
            if ( v13 )
            {
              if ( v32 )
                v29 = (v32 - v11) >> 1;
              else
                v29 = 0LL;
              *v13 = v29;
            }
            if ( a4 )
              *a4 = v23;
            *(_QWORD *)(v23 + 8) = v11;
            v20 = 0;
            goto LABEL_22;
          }
          while ( 1 )
          {
            if ( (unsigned __int64)v19 + 2 > 0xFFFE )
            {
              v20 = -1073741562;
LABEL_37:
              v15 = 0LL;
              goto LABEL_18;
            }
            v24 = (unsigned __int16)(v19 + 2);
            a8 = (_QWORD *)v24;
            Atom = (_WORD *)RtlpAllocateAtom();
            v15 = (__int64)Atom;
            if ( !Atom )
              break;
            v26 = RtlGetFullPathName_Ustr(a1, (int)v24 - 2, Atom, &v32, a6, &v34);
            v19 = v26;
            if ( !v26 )
              goto LABEL_23;
            v27 = (__int16)a8;
            if ( v26 <= (unsigned __int64)a8 - 2 )
            {
              if ( v13 )
              {
                if ( v32 )
                  v30 = (v32 - v15) >> 1;
                else
                  v30 = 0LL;
                *v13 = v30;
              }
              *(_WORD *)(v15 + 2 * ((unsigned __int64)v19 >> 1)) = 0;
              *(_QWORD *)(v23 + 8) = v15;
              *(_WORD *)v23 = v19;
              *(_WORD *)(v23 + 2) = v27;
              if ( a4 )
                *a4 = v23;
              v20 = 0;
              goto LABEL_37;
            }
            RtlpSysVolFree(v15);
          }
          v20 = -1073741801;
        }
        else
        {
          if ( v12 )
            *v12 = FullPathName_Ustr;
          v20 = -1073741789;
        }
      }
    }
    else
    {
LABEL_23:
      v20 = -1073741773;
    }
LABEL_18:
    if ( v11 )
      RtlpSysVolFree(v11);
    if ( v15 )
      RtlpSysVolFree(v15);
LABEL_22:
    result = v20;
    *v14 = v34;
    return result;
  }
  a5 = 520LL;
  v22 = RtlpAllocateAtom();
  v11 = v22;
  if ( v22 )
  {
    v17 = (_WORD *)v22;
    v16 = 520;
    goto LABEL_11;
  }
  return 3221225495LL;
}
