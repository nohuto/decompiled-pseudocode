/*
 * XREFs of ?ReleaseOutputDataPointer@?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x140051A20
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x14000F4CC (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     ?IsValidOffset@?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAA_N_J@Z @ 0x140051CC8 (-IsValidOffset@-$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UCont.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 *     memcpy_0 @ 0x14005B571 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::ReleaseOutputDataPointer(
        __int64 a1,
        __int64 a2)
{
  unsigned int v2; // r14d
  unsigned int v3; // esi
  signed __int64 v6; // rax
  __int64 v7; // rbp
  signed __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int32 v12; // ecx
  int v13; // ecx
  unsigned int v14; // ebp
  void *v15; // rcx
  int v16; // edx
  unsigned int v17; // ebp
  void *v18; // rcx
  int v19; // ebx
  int v20; // edx
  size_t v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rcx
  void *v24; // rax
  void *v25; // rax

  v2 = *(_DWORD *)(a2 + 8);
  LOBYTE(v3) = 0;
  v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 - 384) + 16LL), 0LL, 0LL);
  v7 = a1 - 472;
  v8 = v6;
  if ( (byte_1400C45C1 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(a1, a2, a1 - 472, 19, v2, v6, 0);
  LODWORD(v9) = CCrossProcessBaseEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::IsValidOffset(
                  v7,
                  v8);
  if ( (_BYTE)v9 )
  {
    if ( v2 )
    {
      v11 = *(_QWORD *)(a1 - 376);
      v9 = v8 / *(unsigned int *)(a1 - 304);
      v10 = *(_DWORD *)(v11 + 160) + (unsigned int)(v8 % *(unsigned int *)(a1 - 304));
      v3 = *(_DWORD *)(a1 - 368) * v2;
      if ( (unsigned int)v10 <= *(_DWORD *)(v11 + 164) )
      {
        if ( v2 >= *(_DWORD *)(a1 + 20) || (v12 = 1, (*(_BYTE *)(a1 - 280) & 1) == 0) )
          v12 = 0;
        v9 = *(_QWORD *)(a1 - 384);
        _InterlockedExchange((volatile __int32 *)(v9 + 176), v12);
        v13 = *(_DWORD *)(a1 + 16);
        if ( v13 )
        {
          if ( v13 != 1 )
            goto LABEL_29;
          v14 = *(_DWORD *)(*(_QWORD *)(a1 - 376) + 164LL);
          LODWORD(v9) = v10 + v3;
          if ( (unsigned int)v10 + v3 <= v14 )
          {
            if ( v3 > v14 )
              goto LABEL_29;
            v15 = (void *)(*(_QWORD *)(a1 - 392) + (unsigned int)v10);
            if ( *(_DWORD *)(a2 + 12) == 1 )
            {
              memcpy_0(v15, *(const void **)(a1 - 344), v3);
            }
            else
            {
              v16 = 128;
              if ( *(_DWORD *)(a1 - 352) != 8 )
                v16 = 0;
              memset_0(v15, v16, v3);
            }
            goto LABEL_28;
          }
          v17 = v14 - v10;
          v18 = (void *)(*(_QWORD *)(a1 - 392) + (unsigned int)v10);
          if ( *(_DWORD *)(a2 + 12) == 1 )
          {
            memcpy_0(v18, *(const void **)(a1 - 344), v17);
            memcpy_0(
              (void *)(*(_QWORD *)(a1 - 392) + *(unsigned int *)(*(_QWORD *)(a1 - 376) + 160LL)),
              (const void *)(v17 + *(_QWORD *)(a1 - 344)),
              v3 - v17);
LABEL_28:
            v9 = *(_QWORD *)(a1 - 384);
            _InterlockedAdd64((volatile signed __int64 *)(v9 + 16), v3);
            goto LABEL_29;
          }
          v19 = 128;
          v20 = 128;
          if ( *(_DWORD *)(a1 - 352) != 8 )
            v20 = 0;
          memset_0(v18, v20, v17);
          v21 = v3 - v17;
          v22 = *(unsigned int *)(*(_QWORD *)(a1 - 376) + 160LL);
        }
        else
        {
          if ( *(_DWORD *)(a2 + 12) != 2 )
            goto LABEL_28;
          v21 = v3;
          v19 = 128;
          v22 = (unsigned int)v10;
        }
        if ( *(_DWORD *)(a1 - 352) != 8 )
          v19 = 0;
        memset_0((void *)(*(_QWORD *)(a1 - 392) + v22), v19, v21);
        goto LABEL_28;
      }
    }
  }
LABEL_29:
  v23 = *(_QWORD *)(a1 - 24);
  if ( v23 )
  {
    v24 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 24LL))(v23);
    SetEvent(v24);
    v25 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 - 16) + 24LL))(*(_QWORD *)(a1 - 16));
    LODWORD(v9) = WaitForSingleObject(v25, 0xFFFFFFFF);
  }
  *(_DWORD *)(a1 + 16) = 3;
  if ( (byte_1400C45C1 & 4) != 0 )
    LODWORD(v9) = McTemplateU0pqxxx_EventWriteTransfer(v23, v10, a1 - 472, 20, v2, v8, v3);
  return v9;
}
