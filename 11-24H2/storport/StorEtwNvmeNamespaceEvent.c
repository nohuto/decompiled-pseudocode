/*
 * XREFs of StorEtwNvmeNamespaceEvent @ 0x1400A9A30
 * Callers:
 *     StorpInitializeNvmeNamespaceTelemetry @ 0x1400AFA58 (StorpInitializeNvmeNamespaceTelemetry.c)
 *     NvmeControllerCreateNvmeNamespace @ 0x1400FAA24 (NvmeControllerCreateNvmeNamespace.c)
 *     NvmeNamespaceClearUnresponsiveAttribute @ 0x1400FC704 (NvmeNamespaceClearUnresponsiveAttribute.c)
 *     NvmeNamespaceSetQOSIoctl @ 0x140111AB4 (NvmeNamespaceSetQOSIoctl.c)
 *     NvmeNamespaceSetUnresponsiveAttribute @ 0x140112140 (NvmeNamespaceSetUnresponsiveAttribute.c)
 *     NvmeNamespaceStorageProtocolCommandIoctlCompletion @ 0x140113700 (NvmeNamespaceStorageProtocolCommandIoctlCompletion.c)
 *     NvmeNamespaceTelemetryIdIoctl @ 0x140113F68 (NvmeNamespaceTelemetryIdIoctl.c)
 *     NvmeNamespaceWaitForRemoveLock @ 0x1401154E0 (NvmeNamespaceWaitForRemoveLock.c)
 *     StorpInitializeNvmePerNamespacePerfTelemetry @ 0x14018C338 (StorpInitializeNvmePerNamespacePerfTelemetry.c)
 * Callees:
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall StorEtwNvmeNamespaceEvent(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        void *a5,
        char a6,
        void *a7,
        char a8,
        void *a9,
        char a10,
        void *a11,
        char a12,
        void *a13,
        char a14,
        void *a15,
        char a16,
        void *a17,
        char a18,
        void *a19,
        char a20)
{
  __int64 v20; // rdi
  NTSTATUS result; // eax
  __int64 v23; // rbx
  EVENT_DESCRIPTOR v24; // xmm0
  int v25; // r11d
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // r8d
  const wchar_t *v29; // rax
  const wchar_t *v30; // rdx
  const wchar_t *v31; // r8
  __int64 v32; // rax
  int v33; // eax
  const wchar_t *v34; // r8
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  void *v39; // rax
  __int64 v40; // rdx
  int v41; // edx
  void *v42; // rax
  __int64 v43; // rdx
  int v44; // edx
  void *v45; // rax
  __int64 v46; // rdx
  int v47; // edx
  void *v48; // rax
  __int64 v49; // rdx
  int v50; // edx
  void *v51; // rax
  __int64 v52; // rdx
  int v53; // edx
  void *v54; // rax
  __int64 v55; // rdx
  int v56; // edx
  void *v57; // rax
  __int64 v58; // rdx
  int v59; // edx
  void *v60; // rax
  NTSTATUS v61; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v62; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-A8h] BYREF
  GUID ActivityId; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  __int64 v66; // [rsp+90h] [rbp-70h]
  __int64 v67; // [rsp+98h] [rbp-68h]
  const wchar_t *v68; // [rsp+A0h] [rbp-60h]
  int v69; // [rsp+A8h] [rbp-58h]
  int v70; // [rsp+ACh] [rbp-54h]
  const wchar_t *v71; // [rsp+B0h] [rbp-50h]
  int v72; // [rsp+B8h] [rbp-48h]
  int v73; // [rsp+BCh] [rbp-44h]
  __int64 v74; // [rsp+C0h] [rbp-40h]
  __int64 v75; // [rsp+C8h] [rbp-38h]
  NTSTATUS *v76; // [rsp+D0h] [rbp-30h]
  __int64 v77; // [rsp+D8h] [rbp-28h]
  __int64 v78; // [rsp+E0h] [rbp-20h]
  __int64 v79; // [rsp+E8h] [rbp-18h]
  const wchar_t *v80; // [rsp+F0h] [rbp-10h]
  int v81; // [rsp+F8h] [rbp-8h]
  int v82; // [rsp+FCh] [rbp-4h]
  __int64 v83; // [rsp+100h] [rbp+0h]
  int v84; // [rsp+108h] [rbp+8h]
  int v85; // [rsp+10Ch] [rbp+Ch]
  __int64 v86; // [rsp+110h] [rbp+10h]
  int v87; // [rsp+118h] [rbp+18h]
  int v88; // [rsp+11Ch] [rbp+1Ch]
  __int64 v89; // [rsp+120h] [rbp+20h]
  int v90; // [rsp+128h] [rbp+28h]
  int v91; // [rsp+12Ch] [rbp+2Ch]
  void *v92; // [rsp+130h] [rbp+30h]
  int v93; // [rsp+138h] [rbp+38h]
  int v94; // [rsp+13Ch] [rbp+3Ch]
  char *v95; // [rsp+140h] [rbp+40h]
  __int64 v96; // [rsp+148h] [rbp+48h]
  void *v97; // [rsp+150h] [rbp+50h]
  int v98; // [rsp+158h] [rbp+58h]
  int v99; // [rsp+15Ch] [rbp+5Ch]
  char *v100; // [rsp+160h] [rbp+60h]
  __int64 v101; // [rsp+168h] [rbp+68h]
  void *v102; // [rsp+170h] [rbp+70h]
  int v103; // [rsp+178h] [rbp+78h]
  int v104; // [rsp+17Ch] [rbp+7Ch]
  char *v105; // [rsp+180h] [rbp+80h]
  __int64 v106; // [rsp+188h] [rbp+88h]
  void *v107; // [rsp+190h] [rbp+90h]
  int v108; // [rsp+198h] [rbp+98h]
  int v109; // [rsp+19Ch] [rbp+9Ch]
  char *v110; // [rsp+1A0h] [rbp+A0h]
  __int64 v111; // [rsp+1A8h] [rbp+A8h]
  void *v112; // [rsp+1B0h] [rbp+B0h]
  int v113; // [rsp+1B8h] [rbp+B8h]
  int v114; // [rsp+1BCh] [rbp+BCh]
  char *v115; // [rsp+1C0h] [rbp+C0h]
  __int64 v116; // [rsp+1C8h] [rbp+C8h]
  void *v117; // [rsp+1D0h] [rbp+D0h]
  int v118; // [rsp+1D8h] [rbp+D8h]
  int v119; // [rsp+1DCh] [rbp+DCh]
  char *v120; // [rsp+1E0h] [rbp+E0h]
  __int64 v121; // [rsp+1E8h] [rbp+E8h]
  void *v122; // [rsp+1F0h] [rbp+F0h]
  int v123; // [rsp+1F8h] [rbp+F8h]
  int v124; // [rsp+1FCh] [rbp+FCh]
  char *v125; // [rsp+200h] [rbp+100h]
  __int64 v126; // [rsp+208h] [rbp+108h]
  void *v127; // [rsp+210h] [rbp+110h]
  int v128; // [rsp+218h] [rbp+118h]
  int v129; // [rsp+21Ch] [rbp+11Ch]
  char *v130; // [rsp+220h] [rbp+120h]
  __int64 v131; // [rsp+228h] [rbp+128h]

  v20 = *(_QWORD *)(a1 + 16);
  result = *(_DWORD *)(a1 + 56);
  v61 = result;
  ActivityId = 0LL;
  v23 = *(_QWORD *)(v20 + 128);
  v62 = 0LL;
  if ( a2 )
  {
    if ( a2 != 1 )
      return result;
    if ( a3 == 2 )
    {
      v24 = (EVENT_DESCRIPTOR)EventNVMeNamespaceError;
    }
    else if ( a3 == 3 )
    {
      v24 = (EVENT_DESCRIPTOR)EventNVMeNamespaceWarning;
    }
    else
    {
      v24 = (EVENT_DESCRIPTOR)EventNVMeNamespaceInformational;
    }
  }
  else if ( a3 == 2 )
  {
    v24 = (EVENT_DESCRIPTOR)EventNVMeNamespaceDiagnosticError;
  }
  else if ( a3 == 3 )
  {
    v24 = (EVENT_DESCRIPTOR)EventNVMeNamespaceDiagnosticWarning;
  }
  else
  {
    v24 = (EVENT_DESCRIPTOR)EventNVMeNamespaceDiagnosticInformational;
  }
  EventDescriptor = v24;
  if ( (*(_BYTE *)(v20 + 136) & 2) != 0 )
    EventDescriptor.Keyword |= 0x8000uLL;
  RaidDriverGetName(*(_QWORD *)(v23 + 16), (__int64)&v62);
  UserData.Ptr = v23 + 56;
  v26 = -1LL;
  *(_QWORD *)&UserData.Size = 4LL;
  v66 = v23 + 1032;
  v67 = 16LL;
  if ( *((_QWORD *)&v62 + 1) )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( *(_WORD *)(*((_QWORD *)&v62 + 1) + 2 * v27) );
    v28 = 2 * v27 + 2;
  }
  else
  {
    v28 = 10;
  }
  v69 = v28;
  v29 = L"NULL";
  v70 = 0;
  if ( *((_QWORD *)&v62 + 1) )
    v29 = (const wchar_t *)*((_QWORD *)&v62 + 1);
  v30 = &word_140150F48;
  v68 = v29;
  v31 = *(const wchar_t **)(v20 + 792);
  if ( v31 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( *((_BYTE *)v31 + v32) );
    v33 = v32 + 1;
  }
  else
  {
    v33 = 1;
    v31 = &word_140150F48;
  }
  v72 = v33;
  v74 = v20 + 4;
  v76 = &v61;
  v78 = v20 + 744;
  v71 = v31;
  v73 = 0;
  v75 = 2LL;
  v77 = 4LL;
  v79 = 1LL;
  v34 = *(const wchar_t **)(v20 + 752);
  if ( v34 )
    v30 = *(const wchar_t **)(v20 + 752);
  else
    v34 = &word_140150F48;
  v35 = -1LL;
  do
    ++v35;
  while ( *((_BYTE *)v30 + v35) );
  v80 = v34;
  v81 = v35 + 1;
  v36 = -1LL;
  v82 = 0;
  do
    ++v36;
  while ( *(_BYTE *)(v20 + 800 + v36) );
  v83 = v20 + 800;
  v84 = v36 + 1;
  v37 = -1LL;
  v85 = 0;
  do
    ++v37;
  while ( *(_BYTE *)(v20 + 841 + v37) );
  v86 = v20 + 841;
  v87 = v37 + 1;
  v38 = -1LL;
  v88 = 0;
  v89 = a4;
  do
    ++v38;
  while ( *(_WORD *)(a4 + 2 * v38) );
  v91 = 0;
  v90 = 2 * v38 + 2;
  v39 = a5;
  if ( a5 )
  {
    v40 = -1LL;
    do
      ++v40;
    while ( *((_WORD *)a5 + v40) );
    v41 = 2 * v40 + 2;
  }
  else
  {
    v41 = v25;
    v39 = &unk_140151214;
  }
  v92 = v39;
  v95 = &a6;
  v42 = a7;
  v93 = v41;
  v94 = 0;
  v96 = 8LL;
  if ( a7 )
  {
    v43 = -1LL;
    do
      ++v43;
    while ( *((_WORD *)a7 + v43) );
    v44 = 2 * v43 + 2;
  }
  else
  {
    v44 = v25;
    v42 = &unk_140151214;
  }
  v97 = v42;
  v100 = &a8;
  v45 = a9;
  v98 = v44;
  v99 = 0;
  v101 = 8LL;
  if ( a9 )
  {
    v46 = -1LL;
    do
      ++v46;
    while ( *((_WORD *)a9 + v46) );
    v47 = 2 * v46 + 2;
  }
  else
  {
    v47 = v25;
    v45 = &unk_140151214;
  }
  v102 = v45;
  v105 = &a10;
  v48 = a11;
  v103 = v47;
  v104 = 0;
  v106 = 8LL;
  if ( a11 )
  {
    v49 = -1LL;
    do
      ++v49;
    while ( *((_WORD *)a11 + v49) );
    v50 = 2 * v49 + 2;
  }
  else
  {
    v50 = v25;
    v48 = &unk_140151214;
  }
  v107 = v48;
  v110 = &a12;
  v51 = a13;
  v108 = v50;
  v109 = 0;
  v111 = 8LL;
  if ( a13 )
  {
    v52 = -1LL;
    do
      ++v52;
    while ( *((_WORD *)a13 + v52) );
    v53 = 2 * v52 + 2;
  }
  else
  {
    v53 = v25;
    v51 = &unk_140151214;
  }
  v112 = v51;
  v115 = &a14;
  v54 = a15;
  v113 = v53;
  v114 = 0;
  v116 = 8LL;
  if ( a15 )
  {
    v55 = -1LL;
    do
      ++v55;
    while ( *((_WORD *)a15 + v55) );
    v56 = 2 * v55 + 2;
  }
  else
  {
    v56 = v25;
    v54 = &unk_140151214;
  }
  v117 = v54;
  v120 = &a16;
  v57 = a17;
  v118 = v56;
  v119 = 0;
  v121 = 8LL;
  if ( a17 )
  {
    v58 = -1LL;
    do
      ++v58;
    while ( *((_WORD *)a17 + v58) );
    v59 = 2 * v58 + 2;
  }
  else
  {
    v59 = v25;
    v57 = &unk_140151214;
  }
  v122 = v57;
  v125 = &a18;
  v60 = a19;
  v123 = v59;
  v124 = 0;
  v126 = 8LL;
  if ( a19 )
  {
    do
      ++v26;
    while ( *((_WORD *)a19 + v26) );
    v25 = 2 * v26 + 2;
  }
  else
  {
    v60 = &unk_140151214;
  }
  v127 = v60;
  v128 = v25;
  v130 = &a20;
  v129 = 0;
  v131 = 8LL;
  return EtwWriteEx(StorPortEventProvider_Context, &EventDescriptor, 0LL, 1u, &ActivityId, 0LL, 0x1Bu, &UserData);
}
