/*
 * XREFs of McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer @ 0x14005A738
 * Callers:
 *     ?DestroyAdapterAllocation@DXGDEVICE@@QEAAXPEAVDXGADAPTERALLOCATION@@@Z @ 0x140339FE4 (-DestroyAdapterAllocation@DXGDEVICE@@QEAAXPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x14035D9B8 (-DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x140361FE0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x14039BCC0 (-ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400156A8 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        char a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        char a31,
        int a32)
{
  int v33; // [rsp+30h] [rbp-D0h] BYREF
  int v34; // [rsp+38h] [rbp-C8h] BYREF
  int v35; // [rsp+40h] [rbp-C0h] BYREF
  int v36; // [rsp+48h] [rbp-B8h] BYREF
  int v37; // [rsp+50h] [rbp-B0h] BYREF
  int v38; // [rsp+58h] [rbp-A8h] BYREF
  int v39; // [rsp+60h] [rbp-A0h] BYREF
  int v40; // [rsp+68h] [rbp-98h] BYREF
  int v41; // [rsp+70h] [rbp-90h] BYREF
  int v42; // [rsp+78h] [rbp-88h] BYREF
  int v43; // [rsp+80h] [rbp-80h] BYREF
  int v44; // [rsp+88h] [rbp-78h] BYREF
  int v45; // [rsp+90h] [rbp-70h] BYREF
  int v46; // [rsp+98h] [rbp-68h] BYREF
  int v47; // [rsp+A0h] [rbp-60h] BYREF
  int v48; // [rsp+A8h] [rbp-58h] BYREF
  int v49; // [rsp+B0h] [rbp-50h] BYREF
  int v50; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v51; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v52; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v53; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v55; // [rsp+F0h] [rbp-10h]
  __int64 v56; // [rsp+F8h] [rbp-8h]
  char *v57; // [rsp+100h] [rbp+0h]
  __int64 v58; // [rsp+108h] [rbp+8h]
  char *v59; // [rsp+110h] [rbp+10h]
  __int64 v60; // [rsp+118h] [rbp+18h]
  char *v61; // [rsp+120h] [rbp+20h]
  __int64 v62; // [rsp+128h] [rbp+28h]
  char *v63; // [rsp+130h] [rbp+30h]
  __int64 v64; // [rsp+138h] [rbp+38h]
  int *v65; // [rsp+140h] [rbp+40h]
  __int64 v66; // [rsp+148h] [rbp+48h]
  int *v67; // [rsp+150h] [rbp+50h]
  __int64 v68; // [rsp+158h] [rbp+58h]
  int *v69; // [rsp+160h] [rbp+60h]
  __int64 v70; // [rsp+168h] [rbp+68h]
  int *v71; // [rsp+170h] [rbp+70h]
  __int64 v72; // [rsp+178h] [rbp+78h]
  int *v73; // [rsp+180h] [rbp+80h]
  __int64 v74; // [rsp+188h] [rbp+88h]
  int *v75; // [rsp+190h] [rbp+90h]
  __int64 v76; // [rsp+198h] [rbp+98h]
  int *v77; // [rsp+1A0h] [rbp+A0h]
  __int64 v78; // [rsp+1A8h] [rbp+A8h]
  __int64 *v79; // [rsp+1B0h] [rbp+B0h]
  __int64 v80; // [rsp+1B8h] [rbp+B8h]
  char *v81; // [rsp+1C0h] [rbp+C0h]
  __int64 v82; // [rsp+1C8h] [rbp+C8h]
  __int64 *v83; // [rsp+1D0h] [rbp+D0h]
  __int64 v84; // [rsp+1D8h] [rbp+D8h]
  int *v85; // [rsp+1E0h] [rbp+E0h]
  __int64 v86; // [rsp+1E8h] [rbp+E8h]
  int *v87; // [rsp+1F0h] [rbp+F0h]
  __int64 v88; // [rsp+1F8h] [rbp+F8h]
  int *v89; // [rsp+200h] [rbp+100h]
  __int64 v90; // [rsp+208h] [rbp+108h]
  int *v91; // [rsp+210h] [rbp+110h]
  __int64 v92; // [rsp+218h] [rbp+118h]
  int *v93; // [rsp+220h] [rbp+120h]
  __int64 v94; // [rsp+228h] [rbp+128h]
  int *v95; // [rsp+230h] [rbp+130h]
  __int64 v96; // [rsp+238h] [rbp+138h]
  int *v97; // [rsp+240h] [rbp+140h]
  __int64 v98; // [rsp+248h] [rbp+148h]
  int *v99; // [rsp+250h] [rbp+150h]
  __int64 v100; // [rsp+258h] [rbp+158h]
  int *v101; // [rsp+260h] [rbp+160h]
  __int64 v102; // [rsp+268h] [rbp+168h]
  int *v103; // [rsp+270h] [rbp+170h]
  __int64 v104; // [rsp+278h] [rbp+178h]
  int *v105; // [rsp+280h] [rbp+180h]
  __int64 v106; // [rsp+288h] [rbp+188h]
  __int64 *v107; // [rsp+290h] [rbp+190h]
  __int64 v108; // [rsp+298h] [rbp+198h]
  char *v109; // [rsp+2A0h] [rbp+1A0h]
  __int64 v110; // [rsp+2A8h] [rbp+1A8h]
  int *v111; // [rsp+2B0h] [rbp+1B0h]
  __int64 v112; // [rsp+2B8h] [rbp+1B8h]
  __int64 v113; // [rsp+2F8h] [rbp+1F8h] BYREF

  v113 = a4;
  v56 = 8LL;
  a32 = 0;
  v55 = &v113;
  v57 = &a5;
  v59 = &a6;
  v61 = &a7;
  v63 = &a8;
  v65 = &v33;
  v67 = &v34;
  v69 = &v35;
  v71 = &v36;
  v73 = &v37;
  v75 = &v38;
  v77 = &v39;
  v79 = &v51;
  v81 = &a17;
  v83 = &v52;
  v85 = &v40;
  v87 = &v41;
  v89 = &v42;
  v91 = &v43;
  v53 = 0LL;
  v50 = 0;
  v49 = 0;
  v48 = 0;
  v47 = 0;
  v46 = 0;
  v45 = 0;
  v44 = 0;
  v43 = 0;
  v42 = 0;
  v41 = 0;
  v40 = 0;
  v52 = 0LL;
  v51 = 0LL;
  v39 = 0;
  v38 = 0;
  v37 = 0;
  v36 = 0;
  v35 = 0;
  v34 = 0;
  v33 = 0;
  v58 = 8LL;
  v60 = 8LL;
  v62 = 4LL;
  v64 = 8LL;
  v66 = 4LL;
  v68 = 4LL;
  v70 = 4LL;
  v72 = 4LL;
  v74 = 4LL;
  v76 = 4LL;
  v78 = 4LL;
  v80 = 8LL;
  v82 = 8LL;
  v84 = 8LL;
  v86 = 4LL;
  v88 = 4LL;
  v90 = 4LL;
  v92 = 4LL;
  v93 = &v44;
  v94 = 4LL;
  v95 = &v45;
  v96 = 4LL;
  v97 = &v46;
  v99 = &v47;
  v101 = &v48;
  v103 = &v49;
  v105 = &v50;
  v107 = &v53;
  v109 = &a31;
  v111 = &a32;
  v98 = 4LL;
  v100 = 4LL;
  v102 = 4LL;
  v104 = 4LL;
  v106 = 4LL;
  v108 = 8LL;
  v110 = 2LL;
  v112 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, a2, a3, 0x1Eu, &v54);
}
