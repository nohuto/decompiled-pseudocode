/*
 * XREFs of ?UpdateAudioActivityPerfTracker@@YAXPEBU_tlgProvider_t@@KQEBD11N@Z @ 0x14002D4B4
 * Callers:
 *     ??1CPerfTracker@@QEAA@XZ @ 0x14000764C (--1CPerfTracker@@QEAA@XZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall UpdateAudioActivityPerfTracker(
        const struct _tlgProvider_t *a1,
        int a2,
        const char *const a3,
        const char *const a4,
        const char *a5,
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
  __int64 v20; // rdi
  __int64 v21; // rdx
  char *v22; // rcx
  const char *v23; // rsi
  char v24; // al
  char *v25; // rax
  char *v26; // rcx
  __int64 v27; // rbx
  const char *v28; // r8
  __int64 v29; // rdx
  char v30; // al
  char *v31; // rax
  char *v32; // rcx
  const char *v33; // r14
  char v34; // al
  char *v35; // rax
  bool v36; // cc
  double v37; // xmm0_8
  double *v38; // rcx
  unsigned int j; // edx
  double v40; // xmm1_8
  int v41; // eax
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
        goto LABEL_11;
      v9 = i;
      goto LABEL_13;
    }
    v17 = *v11;
    v18 = v9 + 1;
    v11 += 166;
    if ( !v17 )
      v18 = v9;
    v9 = v18;
  }
  v19 = a6;
  v36 = v9 < 5;
  if ( v9 == 5 )
  {
    v37 = a6;
    v38 = (double *)&unk_1400C4B90;
    for ( j = 0; j < 5; ++j )
    {
      v40 = v37;
      if ( v37 > *v38 )
      {
        v37 = *v38;
        v10 = 1;
      }
      v41 = j;
      if ( v40 <= *v38 )
        v41 = v9;
      v38 += 83;
      v9 = v41;
    }
    if ( v10 )
      goto LABEL_13;
    v36 = v41 < 5;
  }
  if ( !v36 )
    goto LABEL_11;
LABEL_13:
  v20 = 664LL * v9;
  v21 = 130LL;
  v22 = (char *)&g_AudioActivityPayload + v20 + 4;
  v23 = (const char *)(a4 - v22);
  do
  {
    if ( v21 == -2147483516 )
      break;
    v24 = v22[(_QWORD)v23];
    if ( !v24 )
      break;
    *v22++ = v24;
    --v21;
  }
  while ( v21 );
  v25 = v22 - 1;
  if ( v21 )
    v25 = v22;
  *v25 = 0;
  if ( !v21 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3A,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\perftracker.cpp",
      (const char *)0x8007007ALL);
  v26 = (char *)&g_AudioActivityPayload + v20 + 134;
  v27 = 260LL;
  v28 = (const char *)(a5 - v26);
  v29 = 260LL;
  do
  {
    if ( v29 == -2147483386 )
      break;
    v30 = v26[(_QWORD)v28];
    if ( !v30 )
      break;
    *v26++ = v30;
    --v29;
  }
  while ( v29 );
  v31 = v26 - 1;
  if ( v29 )
    v31 = v26;
  *v31 = 0;
  if ( !v29 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3B,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\perftracker.cpp",
      (const char *)0x8007007ALL);
  v32 = (char *)&g_AudioActivityPayload + v20 + 394;
  v33 = (const char *)(a3 - v32);
  do
  {
    if ( v27 == -2147483386 )
      break;
    v34 = v32[(_QWORD)v33];
    if ( !v34 )
      break;
    *v32++ = v34;
    --v27;
  }
  while ( v27 );
  v35 = v32 - 1;
  if ( v27 )
    v35 = v32;
  *v35 = 0;
  if ( !v27 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3C,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\perftracker.cpp",
      (const char *)0x8007007ALL);
  *(double *)((char *)&g_AudioActivityPayload + v20 + 656) = v19;
  *(_DWORD *)((char *)&g_AudioActivityPayload + v20) = a2;
LABEL_11:
  LeaveCriticalSection(&g_csAudioActivityPayload);
}
