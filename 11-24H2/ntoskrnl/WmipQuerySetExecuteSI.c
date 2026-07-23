/*
 * XREFs of WmipQuerySetExecuteSI @ 0x1409B2A54
 * Callers:
 *     IoWMISetSingleInstance @ 0x1407A3C00 (IoWMISetSingleInstance.c)
 *     IoWMISetSingleItem @ 0x1407A3D30 (IoWMISetSingleItem.c)
 *     WmipQuerySingleMultiple @ 0x1407A5030 (WmipQuerySingleMultiple.c)
 *     WmipIoControl @ 0x1409B1150 (WmipIoControl.c)
 *     IoWMIQuerySingleInstance @ 0x1409B2250 (IoWMIQuerySingleInstance.c)
 *     IoWMIExecuteMethod @ 0x140A985C0 (IoWMIExecuteMethod.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObReferenceObjectByPointer @ 0x140424A50 (ObReferenceObjectByPointer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     WmipSendWmiIrp @ 0x1409B2964 (WmipSendWmiIrp.c)
 *     WmipUnreferenceEntry @ 0x1409B31A8 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x1409B3294 (WmipForwardWmiIrp.c)
 *     WmipPrepareWnodeSI @ 0x1409B3B80 (WmipPrepareWnodeSI.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipQuerySetExecuteSI(
        PVOID Object,
        IRP *a2,
        KPROCESSOR_MODE a3,
        unsigned __int8 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // r14
  PVOID v10; // rsi
  __int64 v11; // r12
  ACCESS_MASK v12; // edx
  void *v13; // rcx
  NTSTATUS v14; // eax
  int v15; // ebx
  __int64 v16; // rcx
  _QWORD *v17; // rsi
  __int64 i; // r14
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // ecx
  ULONG_PTR *p_Information; // rax
  __int64 v23; // r15
  _QWORD *v24; // r14
  ULONG_PTR *v26; // rax
  char v27; // [rsp+30h] [rbp-C1h] BYREF
  char v28[7]; // [rsp+31h] [rbp-C0h] BYREF
  PVOID v29; // [rsp+38h] [rbp-B9h] BYREF
  PVOID P; // [rsp+40h] [rbp-B1h] BYREF
  unsigned int *v31; // [rsp+48h] [rbp-A9h]
  PVOID v32; // [rsp+50h] [rbp-A1h]
  __int128 v33; // [rsp+58h] [rbp-99h] BYREF
  _BYTE v34[128]; // [rsp+70h] [rbp-81h] BYREF

  v7 = a7;
  v10 = Object;
  v32 = Object;
  v31 = a7;
  v11 = a4;
  memset_0(v34, 0, sizeof(v34));
  v28[0] = 0;
  v12 = *((_DWORD *)DesiredAccessForFunction + v11);
  v27 = 0;
  v33 = 0LL;
  if ( v10 )
  {
    v14 = ObReferenceObjectByPointer(v10, v12, WmipGuidObjectType, a3);
  }
  else
  {
    v13 = *(void **)(a5 + 16);
    v29 = 0LL;
    v14 = ObReferenceObjectByHandle(v13, v12, WmipGuidObjectType, a3, &v29, 0LL);
    v10 = v29;
    v32 = v29;
  }
  v15 = v14;
  if ( v14 < 0 )
    return (unsigned int)v15;
  LODWORD(v29) = 16;
  P = v34;
  v15 = WmipPrepareWnodeSI((_DWORD)v10, a5, (unsigned int)&v29, (unsigned int)&P, (__int64)v28, (__int64)&v27);
  if ( v15 >= 0 )
  {
    if ( v27 )
    {
      *(_DWORD *)(a5 + 44) |= 0x100u;
      *(_DWORD *)a5 = 48;
      a2->IoStatus.Information = 48LL;
    }
    else if ( v28[0] )
    {
      if ( (_BYTE)v11 == 3 || (v15 = -1073741162, (_BYTE)v11 == 9) )
        v15 = -1073741161;
      v17 = P;
      for ( i = 0LL; (unsigned int)i < (unsigned int)v29; i = (unsigned int)(i + 1) )
      {
        v19 = v17[i];
        v20 = *(unsigned int *)(v19 + 80);
        *(_DWORD *)(a5 + 4) = v20;
        if ( a2 )
        {
          v21 = WmipForwardWmiIrp(a2, a6, a5);
          p_Information = &a2->IoStatus.Information;
        }
        else
        {
          LOBYTE(v19) = v11;
          v21 = WmipSendWmiIrp(v19, v20, a5 + 24, a6, a5, &v33);
          p_Information = (ULONG_PTR *)&v33 + 1;
        }
        if ( v21 >= 0 )
        {
          *v31 = *(_DWORD *)p_Information;
LABEL_15:
          v15 = v21;
          break;
        }
        if ( (unsigned int)(v21 + 1073741163) > 1 )
          goto LABEL_15;
      }
      if ( (_DWORD)v29 )
      {
        v23 = (unsigned int)v29;
        v24 = v17;
        do
        {
          WmipUnreferenceEntry(&WmipISChunkInfo, *v24++);
          --v23;
        }
        while ( v23 );
      }
      if ( v17 != (_QWORD *)v34 && v17 )
        ExFreePoolWithTag(v17, 0);
      if ( v15 < 0 )
        goto LABEL_24;
      v7 = v31;
    }
    else
    {
      if ( a2 )
      {
        v15 = WmipForwardWmiIrp(a2, a6, a5);
        v26 = &a2->IoStatus.Information;
      }
      else
      {
        LOBYTE(v16) = v11;
        v15 = WmipSendWmiIrp(v16, *(unsigned int *)(a5 + 4), a5 + 24, a6, a5, &v33);
        v26 = (ULONG_PTR *)&v33 + 1;
      }
      if ( v15 < 0 )
      {
LABEL_24:
        *(_DWORD *)(a5 + 4) = 0;
        v10 = v32;
        goto LABEL_25;
      }
      *a7 = *(_DWORD *)v26;
    }
    if ( *v7 > a6 )
      v15 = -1073741811;
    goto LABEL_24;
  }
LABEL_25:
  if ( v10 )
    ObfDereferenceObject(v10);
  return (unsigned int)v15;
}
