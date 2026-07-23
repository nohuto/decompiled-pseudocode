/*
 * XREFs of VfIovPluginEntry @ 0x1406A4D60
 * Callers:
 *     <none>
 * Callees:
 *     DifRegisterPlugin @ 0x140617190 (DifRegisterPlugin.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ViIovInitialization @ 0x140BA6ED4 (ViIovInitialization.c)
 */

__int64 VfIovPluginEntry()
{
  int v0; // ebx
  const char *v2; // [rsp+20h] [rbp-E0h] BYREF
  int v3; // [rsp+28h] [rbp-D8h]
  __int64 (__fastcall *v4)(); // [rsp+30h] [rbp-D0h]
  __int64 v5; // [rsp+38h] [rbp-C8h]
  const char *v6; // [rsp+40h] [rbp-C0h]
  int v7; // [rsp+48h] [rbp-B8h]
  __int64 (__fastcall *v8)(); // [rsp+50h] [rbp-B0h]
  __int64 v9; // [rsp+58h] [rbp-A8h]
  const char *v10; // [rsp+60h] [rbp-A0h]
  int v11; // [rsp+68h] [rbp-98h]
  __int64 (__fastcall *v12)(); // [rsp+70h] [rbp-90h]
  __int64 v13; // [rsp+78h] [rbp-88h]
  const char *v14; // [rsp+80h] [rbp-80h]
  int v15; // [rsp+88h] [rbp-78h]
  __int64 (__fastcall *v16)(); // [rsp+90h] [rbp-70h]
  __int64 v17; // [rsp+98h] [rbp-68h]
  const char *v18; // [rsp+A0h] [rbp-60h]
  int v19; // [rsp+A8h] [rbp-58h]
  __int64 (__fastcall *v20)(); // [rsp+B0h] [rbp-50h]
  __int64 v21; // [rsp+B8h] [rbp-48h]
  const char *v22; // [rsp+C0h] [rbp-40h]
  int v23; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall *v24)(); // [rsp+D0h] [rbp-30h]
  __int64 v25; // [rsp+D8h] [rbp-28h]
  const char *v26; // [rsp+E0h] [rbp-20h]
  int v27; // [rsp+E8h] [rbp-18h]
  __int64 v28; // [rsp+F0h] [rbp-10h]
  __int64 (__fastcall *v29)(); // [rsp+F8h] [rbp-8h]
  const char *v30; // [rsp+100h] [rbp+0h]
  int v31; // [rsp+108h] [rbp+8h]
  __int64 v32; // [rsp+110h] [rbp+10h]
  __int64 (__fastcall *v33)(); // [rsp+118h] [rbp+18h]
  const char *v34; // [rsp+120h] [rbp+20h]
  int v35; // [rsp+128h] [rbp+28h]
  __int64 v36; // [rsp+130h] [rbp+30h]
  __int64 (__fastcall *v37)(); // [rsp+138h] [rbp+38h]
  const char *v38; // [rsp+140h] [rbp+40h]
  int v39; // [rsp+148h] [rbp+48h]
  __int64 (__fastcall *v40)(); // [rsp+150h] [rbp+50h]
  __int64 v41; // [rsp+158h] [rbp+58h]
  const char *v42; // [rsp+160h] [rbp+60h]
  int v43; // [rsp+168h] [rbp+68h]
  __int64 (__fastcall *v44)(); // [rsp+170h] [rbp+70h]
  __int64 v45; // [rsp+178h] [rbp+78h]
  const char *v46; // [rsp+180h] [rbp+80h]
  int v47; // [rsp+188h] [rbp+88h]
  __int64 (__fastcall *v48)(); // [rsp+190h] [rbp+90h]
  __int64 v49; // [rsp+198h] [rbp+98h]
  const char *v50; // [rsp+1A0h] [rbp+A0h]
  int v51; // [rsp+1A8h] [rbp+A8h]
  __int64 (__fastcall *v52)(); // [rsp+1B0h] [rbp+B0h]
  __int64 v53; // [rsp+1B8h] [rbp+B8h]

  v3 = 330;
  v5 = 0LL;
  qword_140EF00A8 = (__int64)ViIovPluginUnload;
  v2 = "IoInitializeRemoveLockEx";
  v4 = ViSpIoAllocateIrp_Exit;
  v6 = "IoAcquireRemoveLockEx";
  v8 = ViSpIoAllocateIrp_Exit;
  v10 = "IoReleaseRemoveLockEx";
  v12 = ViSpIoAllocateIrp_Exit;
  v14 = "IoReleaseRemoveLockAndWaitEx";
  v16 = ViSpIoAllocateIrp_Exit;
  v18 = "ExFreePool";
  v20 = ViIovExFreePool_Entry;
  v22 = "ExFreePoolWithTag";
  v24 = ViIovExFreePoolWithTag_Entry;
  v26 = "IoBuildAsynchronousFsdRequest";
  v29 = ViIovIoBuildAsynchronousFsdRequest_Exit;
  v30 = "IoBuildDeviceIoControlRequest";
  v33 = ViIovIoBuildDeviceIoControlRequest_Exit;
  v34 = "IoBuildSynchronousFsdRequest";
  v37 = ViIovIoBuildSynchronousFsdRequest_Exit;
  v38 = "IoAllocateIrp";
  v40 = ViSpIoAllocateIrp_Exit;
  v42 = "IoAllocateIrpEx";
  v44 = ViSpIoAllocateIrp_Exit;
  v46 = "IoInitializeTimer";
  v48 = ViIoInitializeTimer_Entry;
  v50 = "IoFreeIrp";
  v52 = ViSpIoAllocateIrp_Exit;
  v7 = 371;
  v9 = 0LL;
  v11 = 316;
  v13 = 0LL;
  v15 = 317;
  v17 = 0LL;
  v19 = 401;
  v21 = 0LL;
  v23 = 400;
  v25 = 0LL;
  v27 = 362;
  v28 = 0LL;
  v31 = 361;
  v32 = 0LL;
  v35 = 360;
  v36 = 0LL;
  v39 = 366;
  v41 = 0LL;
  v43 = 367;
  v45 = 0LL;
  v47 = 329;
  v49 = 0LL;
  v51 = 340;
  v53 = 0LL;
  v0 = DifRegisterPlugin((__int64)&v2, 0xDu, 4u, &ViIovPluginSetting);
  if ( v0 >= 0 )
    ViIovInitialization();
  return (unsigned int)v0;
}
