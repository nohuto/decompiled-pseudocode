/*
 * XREFs of ?SetWorldTransform@CDesktopTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z @ 0x1801B6320
 * Callers:
 *     <none>
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?SetWorldTransform@CTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z @ 0x1801B66E0 (-SetWorldTransform@CTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

bool __fastcall CDesktopTreeData::SetWorldTransform(
        CDesktopTreeData *this,
        const struct CMILMatrix *a2,
        bool a3,
        struct CMILMatrix *a4)
{
  bool result; // al
  bool v7; // bl
  _DWORD *v8; // r9
  __int64 v9; // rax
  _BYTE *v10; // rdx
  __int64 i; // rcx
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r10
  __int64 v16; // rcx
  _BYTE *v17; // r8
  __int64 v18; // rdx
  __int64 j; // rax
  __int64 *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // xmm1_4
  int v24; // xmm0_4
  int v25; // xmm1_4
  int v26; // xmm0_4
  int v27; // xmm1_4
  int v28; // xmm0_4
  int v29; // xmm1_4
  int v30; // xmm0_4
  int v31; // xmm1_4
  int v32; // xmm0_4
  int v33; // xmm1_4
  int v34; // xmm0_4
  int v35; // xmm1_4
  int v36; // xmm0_4
  int v37; // xmm1_4
  int v38; // [rsp+30h] [rbp-D0h] BYREF
  int v39; // [rsp+38h] [rbp-C8h] BYREF
  int v40; // [rsp+40h] [rbp-C0h] BYREF
  int v41; // [rsp+48h] [rbp-B8h] BYREF
  int v42; // [rsp+50h] [rbp-B0h] BYREF
  int v43; // [rsp+58h] [rbp-A8h] BYREF
  int v44; // [rsp+60h] [rbp-A0h] BYREF
  int v45; // [rsp+68h] [rbp-98h] BYREF
  int v46; // [rsp+70h] [rbp-90h] BYREF
  int v47; // [rsp+78h] [rbp-88h] BYREF
  int v48; // [rsp+80h] [rbp-80h] BYREF
  int v49; // [rsp+88h] [rbp-78h] BYREF
  int v50; // [rsp+90h] [rbp-70h] BYREF
  int v51; // [rsp+98h] [rbp-68h] BYREF
  int v52; // [rsp+A0h] [rbp-60h] BYREF
  int v53; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v54; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v55; // [rsp+B8h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v57; // [rsp+D0h] [rbp-30h]
  __int64 v58; // [rsp+D8h] [rbp-28h]
  unsigned __int64 *v59; // [rsp+E0h] [rbp-20h]
  __int64 v60; // [rsp+E8h] [rbp-18h]
  int *v61; // [rsp+F0h] [rbp-10h]
  __int64 v62; // [rsp+F8h] [rbp-8h]
  int *v63; // [rsp+100h] [rbp+0h]
  __int64 v64; // [rsp+108h] [rbp+8h]
  int *v65; // [rsp+110h] [rbp+10h]
  __int64 v66; // [rsp+118h] [rbp+18h]
  int *v67; // [rsp+120h] [rbp+20h]
  __int64 v68; // [rsp+128h] [rbp+28h]
  int *v69; // [rsp+130h] [rbp+30h]
  __int64 v70; // [rsp+138h] [rbp+38h]
  int *v71; // [rsp+140h] [rbp+40h]
  __int64 v72; // [rsp+148h] [rbp+48h]
  int *v73; // [rsp+150h] [rbp+50h]
  __int64 v74; // [rsp+158h] [rbp+58h]
  int *v75; // [rsp+160h] [rbp+60h]
  __int64 v76; // [rsp+168h] [rbp+68h]
  int *v77; // [rsp+170h] [rbp+70h]
  __int64 v78; // [rsp+178h] [rbp+78h]
  int *v79; // [rsp+180h] [rbp+80h]
  __int64 v80; // [rsp+188h] [rbp+88h]
  int *v81; // [rsp+190h] [rbp+90h]
  __int64 v82; // [rsp+198h] [rbp+98h]
  int *v83; // [rsp+1A0h] [rbp+A0h]
  __int64 v84; // [rsp+1A8h] [rbp+A8h]
  int *v85; // [rsp+1B0h] [rbp+B0h]
  __int64 v86; // [rsp+1B8h] [rbp+B8h]
  int *v87; // [rsp+1C0h] [rbp+C0h]
  __int64 v88; // [rsp+1C8h] [rbp+C8h]
  int *v89; // [rsp+1D0h] [rbp+D0h]
  __int64 v90; // [rsp+1D8h] [rbp+D8h]
  int *v91; // [rsp+1E0h] [rbp+E0h]
  __int64 v92; // [rsp+1E8h] [rbp+E8h]

  result = CTreeData::SetWorldTransform(this, a2, a3, a4);
  v7 = result;
  if ( result && (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
  {
    v8 = *(_DWORD **)(*((_QWORD *)this + 31) + 232LL);
    if ( (*v8 & 0x1000000) != 0 )
    {
      v9 = (unsigned int)v8[1];
      v10 = v8 + 2;
      for ( i = 0LL; (unsigned int)i < (unsigned int)v9; ++v10 )
      {
        if ( *v10 == 8 )
          break;
        i = (unsigned int)(i + 1);
      }
      if ( (unsigned int)i >= (unsigned int)v9 )
        v12 = 0LL;
      else
        v12 = (__int64 *)((char *)v8 + 8 * i - (((_BYTE)v9 + 15) & 7) + v9 + 15);
      v13 = *v12;
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 112);
        v15 = 0LL;
        if ( v14 )
          v15 = *(_QWORD *)(v14 + 64);
        if ( v15 )
        {
          v16 = (unsigned int)v8[1];
          v17 = v8 + 2;
          v18 = 0LL;
          for ( j = 0LL; (unsigned int)v18 < (unsigned int)v16; ++v17 )
          {
            if ( *v17 == 8 )
              break;
            v18 = (unsigned int)(v18 + 1);
          }
          if ( (unsigned int)v18 >= (unsigned int)v16 )
          {
            v20 = 0LL;
          }
          else
          {
            v17 = (_BYTE *)(v16 + 15);
            v20 = (__int64 *)((char *)v8 + v16 + 8 * v18 - (((_BYTE)v16 + 15) & 7) + 15);
          }
          v21 = *v20;
          if ( v21 )
          {
            v22 = *(_QWORD *)(v21 + 112);
            if ( v22 )
              j = *(_QWORD *)(v22 + 96);
          }
          v23 = *((_DWORD *)a2 + 14);
          v53 = *((_DWORD *)a2 + 15);
          v24 = *((_DWORD *)a2 + 13);
          v52 = v23;
          v25 = *((_DWORD *)a2 + 12);
          v51 = v24;
          v26 = *((_DWORD *)a2 + 11);
          v50 = v25;
          v27 = *((_DWORD *)a2 + 10);
          v49 = v26;
          v28 = *((_DWORD *)a2 + 9);
          v48 = v27;
          v29 = *((_DWORD *)a2 + 8);
          v47 = v28;
          v30 = *((_DWORD *)a2 + 7);
          v46 = v29;
          v31 = *((_DWORD *)a2 + 6);
          v57 = &v54;
          v59 = &v55;
          v61 = &v38;
          v63 = &v39;
          v65 = &v40;
          v67 = &v41;
          v69 = &v42;
          v71 = &v43;
          v73 = &v44;
          v75 = &v45;
          v77 = &v46;
          v45 = v30;
          v32 = *((_DWORD *)a2 + 5);
          v44 = v31;
          v33 = *((_DWORD *)a2 + 4);
          v79 = &v47;
          v43 = v32;
          v34 = *((_DWORD *)a2 + 3);
          v42 = v33;
          v35 = *((_DWORD *)a2 + 2);
          v81 = &v48;
          v41 = v34;
          v36 = *((_DWORD *)a2 + 1);
          v40 = v35;
          v37 = *(_DWORD *)a2;
          v83 = &v49;
          v39 = v36;
          v38 = v37;
          v55 = (unsigned int)j | (unsigned __int64)((__int64)SHIDWORD(j) << 32);
          v54 = v15;
          v58 = 8LL;
          v60 = 8LL;
          v62 = 4LL;
          v64 = 4LL;
          v66 = 4LL;
          v68 = 4LL;
          v70 = 4LL;
          v72 = 4LL;
          v74 = 4LL;
          v76 = 4LL;
          v78 = 4LL;
          v80 = 4LL;
          v82 = 4LL;
          v84 = 4LL;
          v85 = &v50;
          v86 = 4LL;
          v87 = &v51;
          v88 = 4LL;
          v89 = &v52;
          v90 = 4LL;
          v91 = &v53;
          v92 = 4LL;
          McGenEventWrite_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_INPUT_SINK_UPDATE_TRANSFORM,
            (__int64)v17,
            0x13u,
            &v56);
        }
      }
      return v7;
    }
  }
  return result;
}
