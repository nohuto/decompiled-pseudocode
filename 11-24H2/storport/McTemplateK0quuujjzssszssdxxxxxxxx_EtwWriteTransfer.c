/*
 * XREFs of McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer @ 0x14007B330
 * Callers:
 *     RaidAdapterStorageTcgActivateLocking @ 0x14007B66C (RaidAdapterStorageTcgActivateLocking.c)
 *     RaidAdapterStorageTcgAssignLockingObject @ 0x14007BBD0 (RaidAdapterStorageTcgAssignLockingObject.c)
 *     RaidAdapterStorageTcgDeassignLockingObject @ 0x14007C21C (RaidAdapterStorageTcgDeassignLockingObject.c)
 *     RaidAdapterStorageTcgEnumerateLockingObjects @ 0x14007C7A8 (RaidAdapterStorageTcgEnumerateLockingObjects.c)
 *     RaidAdapterStorageTcgEraseLockingObject @ 0x14007CDC0 (RaidAdapterStorageTcgEraseLockingObject.c)
 *     RaidAdapterStorageTcgGetLockingObjectMetadata @ 0x14007D338 (RaidAdapterStorageTcgGetLockingObjectMetadata.c)
 *     RaidAdapterStorageTcgQueryCapability @ 0x14007D928 (RaidAdapterStorageTcgQueryCapability.c)
 *     RaidAdapterStorageTcgResetState @ 0x14007DE48 (RaidAdapterStorageTcgResetState.c)
 *     RaidAdapterStorageTcgRevertConfig @ 0x14007E2FC (RaidAdapterStorageTcgRevertConfig.c)
 *     RaidAdapterStorageTcgSetLockingObject @ 0x14007E850 (RaidAdapterStorageTcgSetLockingObject.c)
 *     RaidAdapterStorageTcgSetLockingObjectAuthKey @ 0x14007EE34 (RaidAdapterStorageTcgSetLockingObjectAuthKey.c)
 *     RaidAdapterStorageTcgSetLockingObjectMetadata @ 0x14007F3E0 (RaidAdapterStorageTcgSetLockingObjectMetadata.c)
 *     RaidAdapterStorageTcgSetSpAuthorityKey @ 0x14007F980 (RaidAdapterStorageTcgSetSpAuthorityKey.c)
 *     RaidUnitStorageTcgActivateLocking @ 0x14007FF0C (RaidUnitStorageTcgActivateLocking.c)
 *     RaidUnitStorageTcgAssignLockingObject @ 0x140080484 (RaidUnitStorageTcgAssignLockingObject.c)
 *     RaidUnitStorageTcgDeassignLockingObject @ 0x140080ADC (RaidUnitStorageTcgDeassignLockingObject.c)
 *     RaidUnitStorageTcgEnumerateLockingObjects @ 0x14008108C (RaidUnitStorageTcgEnumerateLockingObjects.c)
 *     RaidUnitStorageTcgEraseLockingObject @ 0x1400816AC (RaidUnitStorageTcgEraseLockingObject.c)
 *     RaidUnitStorageTcgGetLockingObjectMetadata @ 0x140081C48 (RaidUnitStorageTcgGetLockingObjectMetadata.c)
 *     RaidUnitStorageTcgQueryCapability @ 0x14008223C (RaidUnitStorageTcgQueryCapability.c)
 *     RaidUnitStorageTcgResetState @ 0x14008277C (RaidUnitStorageTcgResetState.c)
 *     RaidUnitStorageTcgRevertConfig @ 0x140082C44 (RaidUnitStorageTcgRevertConfig.c)
 *     RaidUnitStorageTcgSetLockingObject @ 0x1400831B4 (RaidUnitStorageTcgSetLockingObject.c)
 *     RaidUnitStorageTcgSetLockingObjectAuthKey @ 0x1400837CC (RaidUnitStorageTcgSetLockingObjectAuthKey.c)
 *     RaidUnitStorageTcgSetLockingObjectMetadata @ 0x140083DA0 (RaidUnitStorageTcgSetLockingObjectMetadata.c)
 *     RaidUnitStorageTcgSetSpAuthorityKey @ 0x140084368 (RaidUnitStorageTcgSetSpAuthorityKey.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140024158 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        const wchar_t *a10,
        const char *a11,
        const char *a12,
        const char *a13,
        const wchar_t *a14,
        const char *a15,
        const char *a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22)
{
  const wchar_t *v22; // rdx
  const char *v23; // rdi
  const char *v24; // r9
  const wchar_t *v25; // r11
  const char *v26; // rbx
  const char *v27; // r10
  int v28; // esi
  const char *v29; // r8
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // ecx
  __int64 v33; // rcx
  int v34; // ecx
  __int64 v35; // rcx
  int v36; // ecx
  __int64 v37; // rcx
  int v38; // ecx
  bool v39; // zf
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  int v43; // eax
  __int64 v45; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v46; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+48h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+58h] [rbp-B0h] BYREF
  int *v49; // [rsp+68h] [rbp-A0h]
  __int64 v50; // [rsp+70h] [rbp-98h]
  char *v51; // [rsp+78h] [rbp-90h]
  __int64 v52; // [rsp+80h] [rbp-88h]
  char *v53; // [rsp+88h] [rbp-80h]
  __int64 v54; // [rsp+90h] [rbp-78h]
  char *v55; // [rsp+98h] [rbp-70h]
  __int64 v56; // [rsp+A0h] [rbp-68h]
  __int64 v57; // [rsp+A8h] [rbp-60h]
  __int64 v58; // [rsp+B0h] [rbp-58h]
  __int64 v59; // [rsp+B8h] [rbp-50h]
  __int64 v60; // [rsp+C0h] [rbp-48h]
  const wchar_t *v61; // [rsp+C8h] [rbp-40h]
  int v62; // [rsp+D0h] [rbp-38h]
  int v63; // [rsp+D4h] [rbp-34h]
  const char *v64; // [rsp+D8h] [rbp-30h]
  int v65; // [rsp+E0h] [rbp-28h]
  int v66; // [rsp+E4h] [rbp-24h]
  const char *v67; // [rsp+E8h] [rbp-20h]
  int v68; // [rsp+F0h] [rbp-18h]
  int v69; // [rsp+F4h] [rbp-14h]
  const char *v70; // [rsp+F8h] [rbp-10h]
  int v71; // [rsp+100h] [rbp-8h]
  int v72; // [rsp+104h] [rbp-4h]
  const wchar_t *v73; // [rsp+108h] [rbp+0h]
  int v74; // [rsp+110h] [rbp+8h]
  int v75; // [rsp+114h] [rbp+Ch]
  const char *v76; // [rsp+118h] [rbp+10h]
  int v77; // [rsp+120h] [rbp+18h]
  int v78; // [rsp+124h] [rbp+1Ch]
  const char *v79; // [rsp+128h] [rbp+20h]
  int v80; // [rsp+130h] [rbp+28h]
  int v81; // [rsp+134h] [rbp+2Ch]
  char *v82; // [rsp+138h] [rbp+30h]
  __int64 v83; // [rsp+140h] [rbp+38h]
  char *v84; // [rsp+148h] [rbp+40h]
  __int64 v85; // [rsp+150h] [rbp+48h]
  char *v86; // [rsp+158h] [rbp+50h]
  __int64 v87; // [rsp+160h] [rbp+58h]
  char *v88; // [rsp+168h] [rbp+60h]
  __int64 v89; // [rsp+170h] [rbp+68h]
  char *v90; // [rsp+178h] [rbp+70h]
  __int64 v91; // [rsp+180h] [rbp+78h]
  char *v92; // [rsp+188h] [rbp+80h]
  __int64 v93; // [rsp+190h] [rbp+88h]
  __int64 *v94; // [rsp+198h] [rbp+90h]
  __int64 v95; // [rsp+1A0h] [rbp+98h]
  __int64 *v96; // [rsp+1A8h] [rbp+A0h]
  __int64 v97; // [rsp+1B0h] [rbp+A8h]
  __int64 *v98; // [rsp+1B8h] [rbp+B0h]
  __int64 v99; // [rsp+1C0h] [rbp+B8h]
  int v100; // [rsp+220h] [rbp+118h] BYREF

  v100 = a4;
  v22 = a10;
  v23 = a16;
  v24 = a15;
  v25 = a14;
  v26 = a13;
  v27 = a12;
  v28 = 10;
  v29 = a11;
  v49 = &v100;
  v51 = &a5;
  v53 = &a6;
  v55 = &a7;
  v57 = a8;
  v59 = a9;
  v30 = -1LL;
  v47 = 0LL;
  v46 = 0LL;
  v45 = 0LL;
  v50 = 4LL;
  v52 = 1LL;
  v54 = 1LL;
  v56 = 1LL;
  v58 = 16LL;
  v60 = 16LL;
  if ( a10 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( a10[v31] );
    v32 = 2 * v31 + 2;
  }
  else
  {
    v32 = 10;
  }
  v62 = v32;
  v63 = 0;
  if ( !a10 )
    v22 = L"NULL";
  v61 = v22;
  if ( a11 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( a11[v33] );
    v34 = v33 + 1;
  }
  else
  {
    v34 = 5;
  }
  v65 = v34;
  v66 = 0;
  if ( !a11 )
    v29 = "NULL";
  v64 = v29;
  if ( a12 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( a12[v35] );
    v36 = v35 + 1;
  }
  else
  {
    v36 = 5;
  }
  v68 = v36;
  v69 = 0;
  if ( !a12 )
    v27 = "NULL";
  v67 = v27;
  if ( a13 )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( a13[v37] );
    v38 = v37 + 1;
  }
  else
  {
    v38 = 5;
  }
  v71 = v38;
  v72 = 0;
  if ( !a13 )
    v26 = "NULL";
  v70 = v26;
  v39 = a14 == 0LL;
  if ( a14 )
  {
    v40 = -1LL;
    do
      ++v40;
    while ( a14[v40] );
    v28 = 2 * v40 + 2;
    v39 = a14 == 0LL;
  }
  if ( v39 )
    v25 = L"NULL";
  v74 = v28;
  v73 = v25;
  v75 = 0;
  if ( a15 )
  {
    v41 = -1LL;
    do
      ++v41;
    while ( a15[v41] );
    v42 = (unsigned int)(v41 + 1);
  }
  else
  {
    v42 = 5LL;
  }
  v77 = v42;
  v78 = 0;
  if ( !a15 )
    v24 = "NULL";
  v76 = v24;
  if ( a16 )
  {
    do
      ++v30;
    while ( a16[v30] );
    v43 = v30 + 1;
  }
  else
  {
    v43 = 5;
  }
  v80 = v43;
  v81 = 0;
  v82 = &a17;
  v83 = 4LL;
  v84 = &a18;
  if ( !a16 )
    v23 = "NULL";
  v79 = v23;
  v86 = &a19;
  v85 = 8LL;
  v88 = &a20;
  v87 = 8LL;
  v90 = &a21;
  v92 = &a22;
  v94 = &v45;
  v96 = &v46;
  v98 = &v47;
  v89 = 8LL;
  v91 = 8LL;
  v93 = 8LL;
  v95 = 8LL;
  v97 = 8LL;
  v99 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(v42, &TcgIoctlFailure, 0LL, 0x17u, &v48);
}
