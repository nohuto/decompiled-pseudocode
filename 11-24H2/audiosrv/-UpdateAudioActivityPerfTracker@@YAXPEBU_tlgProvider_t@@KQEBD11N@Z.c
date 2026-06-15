/*
 * XREFs of ?UpdateAudioActivityPerfTracker@@YAXPEBU_tlgProvider_t@@KQEBD11N@Z @ 0x18009B188
 * Callers:
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800252E8 (--1CPerfTracker@@QEAA@XZ.c)
 * Callees:
 *     ?StringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x180042C40 (-StringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall UpdateAudioActivityPerfTracker(
        const struct _tlgProvider_t *a1,
        int a2,
        const char *a3,
        const char *a4,
        char *a5,
        double a6)
{
  int v9; // r10d
  char v10; // di
  int *v11; // rbx
  int i; // r11d
  const char *v13; // rax
  const char *v14; // r8
  int v15; // edx
  int v16; // ecx
  int v17; // ecx
  int v18; // eax
  double v19; // xmm6_8
  bool v20; // cc
  double v21; // xmm0_8
  double *v22; // rcx
  unsigned int j; // edx
  double v24; // xmm1_8
  int v25; // eax
  __int64 v26; // rbx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  EnterCriticalSection(&g_csAudioActivityPayload);
  v9 = 0;
  v10 = 0;
  v11 = (int *)&g_AudioActivityPayload;
  for ( i = 0; (unsigned __int64)i < 5; ++i )
  {
    v13 = (char *)&g_AudioActivityPayload + 664 * i + 394;
    v14 = (const char *)(a3 - v13);
    do
    {
      v15 = (unsigned __int8)v14[(_QWORD)v13];
      v16 = *(unsigned __int8 *)v13 - v15;
      if ( v16 )
        break;
      ++v13;
    }
    while ( v15 );
    if ( !v16 )
    {
      v19 = a6;
      if ( a6 <= *((double *)&g_AudioActivityPayload + 83 * i + 82) )
        goto LABEL_29;
      v9 = i;
      goto LABEL_22;
    }
    v17 = *v11;
    v18 = v9 + 1;
    v11 += 166;
    if ( !v17 )
      v18 = v9;
    v9 = v18;
  }
  v19 = a6;
  v20 = v9 < 5;
  if ( v9 == 5 )
  {
    v21 = a6;
    v22 = (double *)&unk_1801DBF60;
    for ( j = 0; j < 5; ++j )
    {
      v24 = v21;
      if ( v21 > *v22 )
      {
        v21 = *v22;
        v10 = 1;
      }
      v25 = j;
      if ( v24 <= *v22 )
        v25 = v9;
      v22 += 83;
      v9 = v25;
    }
    if ( v10 )
      goto LABEL_22;
    v20 = v25 < 5;
  }
  if ( !v20 )
    goto LABEL_29;
LABEL_22:
  v26 = 664LL * v9;
  v27 = StringCchCopyA((char *)&g_AudioActivityPayload + v26 + 4, 130LL, a4);
  if ( v27 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3B,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\perftracker.cpp",
      (const char *)(unsigned int)v27,
      v30);
  v28 = StringCchCopyA((char *)&g_AudioActivityPayload + v26 + 134, 260LL, a5);
  if ( v28 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3C,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\perftracker.cpp",
      (const char *)(unsigned int)v28,
      v30);
  v29 = StringCchCopyA((char *)&g_AudioActivityPayload + v26 + 394, 260LL, a3);
  if ( v29 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3D,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\perftracker.cpp",
      (const char *)(unsigned int)v29,
      v30);
  *(double *)((char *)&g_AudioActivityPayload + v26 + 656) = v19;
  *(_DWORD *)((char *)&g_AudioActivityPayload + v26) = a2;
LABEL_29:
  LeaveCriticalSection(&g_csAudioActivityPayload);
}
