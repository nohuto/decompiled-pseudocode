/*
 * XREFs of ?SizeRect@@YAHPEAUMOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x140248FAC
 * Callers:
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x14024C350 (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x14020B8C8 (-SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 *     Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x140274E78 (Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall SizeRect(struct MOVESIZEDATA *a1, __int64 a2, struct tagMONITOR *a3, unsigned int *a4)
{
  int v4; // edi
  unsigned int v6; // esi
  struct CHECKPOINT *Prop; // r14
  int v9; // eax
  __int64 v10; // rcx
  char v11; // di
  char v12; // bl
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  __int64 v16; // rax
  __int64 v18; // rbp
  __int64 v19; // r15
  int v20; // ebp
  __int64 v21; // r12
  int v22; // eax
  int v23; // edx
  int v24; // edi
  int v25; // ebp
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rbp
  int v29; // ecx
  __int64 v30; // rsi
  int v31; // edi
  int v32; // ebp
  __int64 v33; // r15
  int v34; // edx
  int v35; // ebp
  int v36; // ecx
  unsigned __int64 v37; // [rsp+80h] [rbp+18h]

  v4 = (__int16)a2;
  v6 = WORD1(a2);
  Prop = 0LL;
  if ( (*((_DWORD *)a1 + 50) & 0x100) != 0 )
  {
    v9 = (__int16)a2 - *((_DWORD *)a1 + 42);
    v10 = (unsigned int)(SWORD1(a2) - *((_DWORD *)a1 + 43));
    v37 = __PAIR64__(v10, v9);
    if ( v9 == *((_DWORD *)a1 + 63) && (_DWORD)v10 == *((_DWORD *)a1 + 64) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v11 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v11 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v12 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v12 = 0;
      }
      if ( v11 || v12 )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
        LOBYTE(v14) = v12;
        LOBYTE(v15) = v11;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v15,
          v14,
          *(_QWORD *)(UserSessionState + 69416),
          5,
          1,
          43,
          (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
      }
      return 0LL;
    }
    v16 = W32GetUserSessionState(v10, a2);
    Prop = (struct CHECKPOINT *)GetProp(*((_QWORD *)a1 + 2), *(unsigned __int16 *)(v16 + 41398), 1u);
    if ( !Prop )
      return 0LL;
    *(_QWORD *)((char *)a1 + 252) = v37;
  }
  v18 = dword_14035A6C0[*((int *)a1 + 44)];
  if ( (int)v18 >= 0 )
  {
    *((_DWORD *)a1 + v18 + 10) = v4;
    v19 = v18;
    v20 = v18 ^ 2;
    v21 = v20;
    a3 = (struct tagMONITOR *)*((unsigned int *)a1 + v20 + 10);
    v22 = v4 - (_DWORD)a3;
    v23 = *((_DWORD *)a1 + v20 + 10) - v4;
    v24 = *((_DWORD *)a1 + 26);
    v25 = v20 & 2;
    if ( !v25 )
      v23 = v22;
    if ( v23 < v24 || (v24 = *((_DWORD *)a1 + 28), v23 > v24) )
    {
      if ( (unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline() )
        *((_DWORD *)a1 + 74) |= 0x40u;
      goto LABEL_29;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 31LL) & 0x40) != 0 )
    {
      v24 = (_DWORD)a3 - *((_DWORD *)a1 + v19 + 22);
      if ( v24 < 0 )
        v24 = *((_DWORD *)a1 + v19 + 22) - (_DWORD)a3;
      if ( v23 > v24 )
      {
LABEL_29:
        v26 = -v24;
        if ( !v25 )
          v26 = v24;
        *((_DWORD *)a1 + v19 + 10) = *((_DWORD *)a1 + v21 + 10) + v26;
      }
    }
  }
  v27 = *((int *)a1 + 44);
  v28 = dword_14035A690[v27];
  if ( (int)v28 >= 0 )
  {
    v29 = (__int16)v6;
    v30 = dword_14035A690[v27];
    *((_DWORD *)a1 + v28 + 10) = v29;
    v31 = *((_DWORD *)a1 + 27);
    v32 = v28 ^ 2;
    v33 = v32;
    a3 = (struct tagMONITOR *)*((unsigned int *)a1 + v32 + 10);
    v34 = *((_DWORD *)a1 + v32 + 10) - v29;
    v35 = v32 & 2;
    if ( !v35 )
      v34 = v29 - (_DWORD)a3;
    if ( v34 < v31 || (v31 = *((_DWORD *)a1 + 29), v34 > v31) )
    {
      if ( (unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline() )
        *((_DWORD *)a1 + 74) |= 0x80u;
    }
    else
    {
      if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 31LL) & 0x40) == 0 )
        goto LABEL_47;
      v31 = (_DWORD)a3 - *((_DWORD *)a1 + v30 + 22);
      if ( v31 < 0 )
        v31 = *((_DWORD *)a1 + v30 + 22) - (_DWORD)a3;
      if ( v34 <= v31 )
        goto LABEL_47;
    }
    v36 = -v31;
    if ( !v35 )
      v36 = v31;
    *((_DWORD *)a1 + v30 + 10) = *((_DWORD *)a1 + v33 + 10) + v36;
  }
LABEL_47:
  if ( (*((_DWORD *)a1 + 50) & 0x100) != 0 )
    SnapSizeRect((const struct tagWND **)a1, Prop, a3, a4);
  return 1LL;
}
