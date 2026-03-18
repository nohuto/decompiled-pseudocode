/*
 * XREFs of ?ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x140219F4C
 * Callers:
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x140202D58 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 * Callees:
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 *     RIMIDE_InjectGenericHidInput @ 0x140121F98 (RIMIDE_InjectGenericHidInput.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsActive@VPTPTouchpad@@QEBA_NXZ @ 0x14019F2FC (-IsActive@VPTPTouchpad@@QEBA_NXZ.c)
 *     ??_GVPTPContact@@QEAAPEAXI@Z @ 0x1402194D0 (--_GVPTPContact@@QEAAPEAXI@Z.c)
 *     ?FindTouchpadAndContact@VirtualTouchpadProcessor@@AEAA_NQEAUtagHID_POINTER_DEVICE_INFO@@PEBUCPointerInfoNode@@PEAPEAVVPTPTouchpad@@PEAPEAVVPTPContact@@@Z @ 0x14021997C (-FindTouchpadAndContact@VirtualTouchpadProcessor@@AEAA_NQEAUtagHID_POINTER_DEVICE_INFO@@PEBUCPoi.c)
 *     ?RemoveTouchpad@VirtualTouchpadProcessor@@AEAAXPEAVVPTPTouchpad@@@Z @ 0x14021A1EC (-RemoveTouchpad@VirtualTouchpadProcessor@@AEAAXPEAVVPTPTouchpad@@@Z.c)
 */

void __fastcall VirtualTouchpadProcessor::ProcessInput(
        VirtualTouchpadProcessor *this,
        const struct CPointerInputFrame *a2)
{
  VPTPTouchpad *v4; // rbx
  unsigned __int16 v5; // r15
  unsigned int v6; // r14d
  struct tagHID_POINTER_DEVICE_INFO *v7; // rdx
  __int64 v8; // r13
  struct VPTPTouchpad *v9; // rsi
  VPTPContact ***v10; // r10
  int v11; // r9d
  float v12; // xmm0_4
  int v13; // ecx
  int v14; // edx
  char v15; // r11
  int v16; // r8d
  int v17; // eax
  int v18; // r8d
  int v19; // eax
  __int64 v20; // r8
  char v21; // cl
  VirtualTouchpadProcessor *v22; // rcx
  unsigned __int64 v23; // rax
  PVOID Buffer; // [rsp+80h] [rbp+18h] BYREF
  VPTPTouchpad *v25; // [rsp+88h] [rbp+20h] BYREF

  if ( *(VirtualTouchpadProcessor **)this == this )
    return;
  if ( !IsInputThread((__int64)this) )
    return;
  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  if ( !*((_DWORD *)a2 + 12) )
    return;
  do
  {
    v7 = (struct tagHID_POINTER_DEVICE_INFO *)*((_QWORD *)a2 + 32);
    v25 = 0LL;
    v8 = *((_QWORD *)a2 + 30) + 480LL * v6;
    Buffer = 0LL;
    if ( !VirtualTouchpadProcessor::FindTouchpadAndContact(
            this,
            v7,
            (const struct CPointerInfoNode *)v8,
            &v25,
            (struct VPTPContact **)&Buffer) )
      goto LABEL_38;
    v9 = v25;
    v10 = (VPTPContact ***)Buffer;
    if ( *((_QWORD *)v25 + 4) )
    {
      if ( !v4 )
      {
        v4 = v25;
LABEL_9:
        v11 = *((_DWORD *)v4 + 48);
        v12 = (float)*((int *)this + 21);
        v13 = (int)(float)(v12 * *((float *)Buffer + 6));
        v14 = (int)(float)(v12 * *((float *)Buffer + 5));
        if ( v14 < v11 || v14 > *((_DWORD *)v4 + 50) || v13 < *((_DWORD *)v4 + 49) || v13 > *((_DWORD *)v4 + 51) )
        {
          v16 = *((_DWORD *)v4 + 50);
          v15 = 0;
          v17 = v16;
          if ( v16 >= v14 )
            v17 = (int)(float)(v12 * *((float *)Buffer + 5));
          if ( v11 <= v17 )
          {
            if ( v16 < v14 )
              v14 = *((_DWORD *)v4 + 50);
          }
          else
          {
            v14 = *((_DWORD *)v4 + 48);
          }
          v18 = *((_DWORD *)v4 + 51);
          v19 = v18;
          if ( v18 >= v13 )
            v19 = (int)(float)(v12 * *((float *)Buffer + 6));
          if ( *((_DWORD *)v4 + 49) <= v19 )
          {
            if ( v18 < v13 )
              v13 = *((_DWORD *)v4 + 51);
          }
          else
          {
            v13 = *((_DWORD *)v4 + 49);
          }
        }
        else
        {
          v15 = 1;
        }
        v20 = 11LL * v5;
        *(_WORD *)((char *)this + v20 + 27) = *(_WORD *)(v8 + 160);
        *(_DWORD *)((char *)this + v20 + 29) = v14;
        *(_DWORD *)((char *)this + v20 + 33) = v13;
        if ( v15 && (*(_DWORD *)(v8 + 180) & 0x4000) != 0 )
          v21 = 2;
        else
          v21 = 0;
        *((_BYTE *)this + v20 + 26) = v21 | ((*(_DWORD *)(v8 + 180) & 4) != 0);
        ++v5;
        goto LABEL_31;
      }
      if ( v25 == v4 )
        goto LABEL_9;
    }
LABEL_31:
    if ( (*(_DWORD *)(v8 + 180) & 0x40000) != 0 )
    {
      if ( v10 )
        VPTPContact::`scalar deleting destructor'(v10);
      if ( !VPTPTouchpad::IsActive(v9) )
      {
        if ( v9 == v4 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 364);
        VirtualTouchpadProcessor::RemoveTouchpad(v22, v9);
      }
    }
LABEL_38:
    ++v6;
  }
  while ( v6 < *((_DWORD *)a2 + 12) );
  if ( v5 )
  {
    if ( !v4 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 378);
    v23 = (unsigned __int64)(10000LL * *((_QWORD *)a2 + 27)) / gliQpcFreq.QuadPart;
    *(_WORD *)((char *)this + 23) = v5;
    *(_WORD *)((char *)this + 21) = v23;
    if ( (int)RIMIDE_InjectGenericHidInput(*((_QWORD *)v4 + 4), 0, (char *)this + 20, 0x3Du) < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 390);
  }
}
