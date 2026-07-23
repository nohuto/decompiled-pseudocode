/*
 * XREFs of RtlpInitializeUserList @ 0x1800C87E0
 * Callers:
 *     RtlSetThreadPreferredUILanguages @ 0x180011A20 (RtlSetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlpLoadLanguageConfigList @ 0x180014A40 (RtlpLoadLanguageConfigList.c)
 *     RtlpUpdateTEBLanguage @ 0x180015820 (RtlpUpdateTEBLanguage.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180016160 (RtlpMuiRegFreeLanguageList.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800C8B80 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpMuiRegCreateLanguageList @ 0x1800CA3B0 (RtlpMuiRegCreateLanguageList.c)
 */

__int64 __fastcall RtlpInitializeUserList(__int64 a1, _QWORD *UserPrefLanguages)
{
  int v3; // edi
  __int64 result; // rax
  unsigned int updated; // ebp
  bool v6; // sf
  struct _TEB *v7; // rdx
  int WowTebOffset; // eax
  struct _TEB *v9; // r8
  __int64 v10; // rax
  struct _TEB *v11; // rcx
  __int64 v12; // rax
  unsigned int MuiImpersonation; // eax
  __int64 v14; // rsi
  _QWORD *Heap; // rax
  _BYTE **v16; // rbx
  struct _TEB *v17; // rdx
  int v18; // ecx
  struct _TEB *v19; // r8
  __int64 v20; // rax
  struct _TEB *v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // eax
  struct _TEB *v24; // rcx
  int v25; // eax
  struct _TEB *v26; // rdx
  __int64 v27; // rax
  bool v28; // zf
  struct _TEB *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  char v33; // [rsp+68h] [rbp+10h] BYREF
  __int64 LanguageList; // [rsp+70h] [rbp+18h] BYREF
  __int64 v35; // [rsp+78h] [rbp+20h] BYREF

  LanguageList = 0LL;
  v35 = 0LL;
  if ( NtCurrentTeb()->UserPrefLanguages )
  {
    UserPrefLanguages = NtCurrentTeb()->UserPrefLanguages;
    if ( *UserPrefLanguages )
      return 0LL;
  }
  if ( !a1 )
    return 3221225473LL;
  v3 = 1;
  v33 = 0;
  result = RtlpMuiRegLoadPreferredUILanguages(
             a1,
             (_DWORD)UserPrefLanguages,
             1,
             3,
             (__int64)&v33,
             (__int64)&LanguageList);
  updated = -1073741801;
  if ( LanguageList )
  {
    v6 = (int)result < 0;
    if ( (_DWORD)result )
    {
      if ( v33 && (_DWORD)result != -1073741801 )
        goto LABEL_6;
      v6 = (int)result < 0;
    }
    if ( v6 )
      return result;
  }
  else
  {
    LanguageList = RtlpMuiRegCreateLanguageList(1LL, 0LL, a1);
    if ( !LanguageList )
      return updated;
  }
LABEL_6:
  v7 = NtCurrentTeb();
  WowTebOffset = v7->WowTebOffset;
  if ( WowTebOffset < 0 )
    LODWORD(v7) = WowTebOffset + (_DWORD)v7;
  v9 = NtCurrentTeb();
  v10 = v9->WowTebOffset;
  if ( (int)v10 < 0 )
    v9 = (struct _TEB *)((char *)v9 + v10);
  v11 = NtCurrentTeb();
  v12 = v11->WowTebOffset;
  if ( (_DWORD)v7 == LODWORD(v9->NtTib.SubSystemTib) )
  {
    if ( (int)v12 < 0 )
      v11 = (struct _TEB *)((char *)v11 + v12);
    MuiImpersonation = HIDWORD(v11->glDispatchTable[186]);
  }
  else
  {
    if ( (int)v12 < 0 )
      v11 = (struct _TEB *)((char *)v11 + v12);
    MuiImpersonation = v11->MuiImpersonation;
  }
  if ( MuiImpersonation || (result = RtlpLoadLanguageConfigList(8u, &v35, a1), (int)result >= 0) )
  {
    v14 = LanguageList;
    *(_DWORD *)(LanguageList + 40) |= 0x10u;
    if ( NtCurrentTeb()->UserPrefLanguages )
    {
      v16 = (_BYTE **)NtCurrentTeb()->UserPrefLanguages;
    }
    else
    {
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x10uLL);
      v16 = (_BYTE **)Heap;
      if ( !Heap )
      {
LABEL_18:
        v17 = NtCurrentTeb();
        v18 = v17->WowTebOffset;
        if ( v18 < 0 )
          LODWORD(v17) = v18 + (_DWORD)v17;
        v19 = NtCurrentTeb();
        v20 = v19->WowTebOffset;
        if ( (int)v20 < 0 )
          v19 = (struct _TEB *)((char *)v19 + v20);
        v21 = NtCurrentTeb();
        v22 = v21->WowTebOffset;
        if ( (_DWORD)v17 == LODWORD(v19->NtTib.SubSystemTib) )
        {
          if ( (int)v22 < 0 )
            v21 = (struct _TEB *)((char *)v21 + v22);
          v23 = HIDWORD(v21->glDispatchTable[186]);
        }
        else
        {
          if ( (int)v22 < 0 )
            v21 = (struct _TEB *)((char *)v21 + v22);
          v23 = v21->MuiImpersonation;
        }
        if ( !v23 )
        {
          v24 = NtCurrentTeb();
          v25 = v24->WowTebOffset;
          if ( v25 < 0 )
            LODWORD(v24) = v25 + (_DWORD)v24;
          v26 = NtCurrentTeb();
          v27 = v26->WowTebOffset;
          if ( (int)v27 < 0 )
            v26 = (struct _TEB *)((char *)v26 + v27);
          v28 = (_DWORD)v24 == LODWORD(v26->NtTib.SubSystemTib);
          v29 = NtCurrentTeb();
          if ( v28 )
          {
            if ( MEMORY[0x7FFE03A4] )
              v3 = MEMORY[0x7FFE03A4];
            v32 = v29->WowTebOffset;
            if ( (int)v32 < 0 )
              v29 = (struct _TEB *)((char *)v29 + v32);
            HIDWORD(v29->glDispatchTable[186]) = v3;
          }
          else
          {
            if ( MEMORY[0x7FFE03A4] )
              v3 = MEMORY[0x7FFE03A4];
            v30 = v29->WowTebOffset;
            if ( (int)v30 < 0 )
              v29 = (struct _TEB *)((char *)v29 + v30);
            v29->MuiImpersonation = v3;
          }
        }
        return updated;
      }
      *Heap = 0LL;
      Heap[1] = 0LL;
      NtCurrentTeb()->UserPrefLanguages = Heap;
    }
    if ( *v16 )
    {
      *(_DWORD *)(v14 + 40) = *((_DWORD *)*v16 + 10);
      RtlpMuiRegFreeLanguageList(*v16);
    }
    v31 = v35;
    updated = 0;
    *v16 = (_BYTE *)LanguageList;
    if ( v31 )
      updated = RtlpUpdateTEBLanguage(0LL, v31, 5);
    goto LABEL_18;
  }
  return result;
}
