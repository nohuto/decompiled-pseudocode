/*
 * XREFs of sub_14002A400 @ 0x14002A400
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005938 @ 0x140005938 (sub_140005938.c)
 *     sub_140010680 @ 0x140010680 (sub_140010680.c)
 *     sub_14002A5D0 @ 0x14002A5D0 (sub_14002A5D0.c)
 *     sub_14002A690 @ 0x14002A690 (sub_14002A690.c)
 *     sub_14002A78C @ 0x14002A78C (sub_14002A78C.c)
 *     sub_14002A850 @ 0x14002A850 (sub_14002A850.c)
 */

__int64 sub_14002A400()
{
  unsigned int LockArray_high; // edi
  unsigned int v1; // esi
  __int64 v2; // rdx
  int v3; // ebx
  KSPIN_LOCK *p_Lock; // r8
  unsigned __int64 v5; // rax
  double v6; // xmm1_8
  __int64 SystemArgument1_low; // r9
  unsigned __int64 v8; // rax

  LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
  v1 = -1073741637;
  v3 = sub_140005938();
  if ( v3 == 2 )
    return v1;
  if ( LockArray_high )
    goto LABEL_17;
  sub_140010680((char *)&DeviceObject.DeviceQueue.Size + 2, 0, 0xDCuLL);
  *(_DWORD *)&DeviceObject.DeviceQueue.Type = v3 & 1;
  sub_14002A850(&DeviceObject.Dpc.DeferredContext);
  if ( ((__int64)DeviceObject.Dpc.DeferredContext & 1) != 0 && !(unsigned __int8)sub_14002A690() )
  {
    sub_140010680((char *)&DeviceObject.Dpc.DeferredContext, 0, 0x98uLL);
    LODWORD(DeviceObject.Dpc.DeferredContext) = 0;
    DeviceObject.Dpc.SystemArgument1 = (PVOID)0x63900000001LL;
  }
  if ( (unsigned __int8)sub_14002A78C(&DeviceObject.Dpc.DeferredContext) )
  {
    v5 = __readmsr(0x606u);
    v2 = (unsigned __int64)HIDWORD(v5) << 32;
    p_Lock = (KSPIN_LOCK *)((unsigned int)v5 >> 8);
    *(_DWORD *)&DeviceObject.DeviceQueue.Type = *(_DWORD *)&DeviceObject.DeviceQueue.Type & 0xFFFFFFC1 | ((unsigned int)v5 >> 7) & 0x3E;
    LOBYTE(word_140019A40) = BYTE1(v5) & 0x1F;
    if ( v3 )
    {
      HIBYTE(word_140019A40) = 1;
      if ( v3 == 1 )
      {
        p_Lock = (KSPIN_LOCK *)(BYTE1(v5) & 0x1F);
        v2 = 1LL << (char)p_Lock;
        if ( 1LL << (char)p_Lock < 0 )
        {
          v2 = (1LL << (char)p_Lock) & 1;
          v6 = (double)(int)(v2 | ((unsigned __int64)(1LL << (char)p_Lock) >> 1))
             + (double)(int)(v2 | ((unsigned __int64)(1LL << (char)p_Lock) >> 1));
        }
        else
        {
          v6 = (double)(int)v2;
        }
        *(double *)&DeviceObject.DeviceQueue.DeviceListHead.Flink = 1.0 / v6;
      }
    }
    else
    {
      HIBYTE(word_140019A40) = 2;
    }
    if ( LODWORD(DeviceObject.Dpc.SystemArgument1) )
    {
      p_Lock = &DeviceObject.DeviceQueue.Lock;
      SystemArgument1_low = LODWORD(DeviceObject.Dpc.SystemArgument1);
      do
      {
        v8 = __readmsr(*((_DWORD *)p_Lock + 15));
        v2 = (unsigned __int64)HIDWORD(v8) << 32;
        *(_DWORD *)p_Lock = v8;
        p_Lock = (KSPIN_LOCK *)((char *)p_Lock + 4);
        --SystemArgument1_low;
      }
      while ( SystemArgument1_low );
    }
LABEL_17:
    if ( ((__int64)DeviceObject.Dpc.DeferredContext & 1) != 0 )
    {
      if ( ((__int64)DeviceObject.Dpc.DeferredContext & 1) == 1 )
        sub_14002A5D0(LockArray_high, v2, p_Lock);
    }
    else if ( !LockArray_high )
    {
      *(_DWORD *)&DeviceObject.DeviceQueue.Type &= ~0x40u;
      qword_140019938[0] = 0LL;
      qword_140019930[0] = (__int64)sub_140005B40;
    }
    return 0;
  }
  return v1;
}
