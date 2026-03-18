/*
 * XREFs of ?RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z @ 0x1400F63BC
 * Callers:
 *     ?Rotate@VIDMM_PROCESS_HEAP@@UEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_HEAP_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ33PEAX@Z5TVIDMM_ROTATE_FLAGS@@@Z @ 0x1400A3D10 (-Rotate@VIDMM_PROCESS_HEAP@@UEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_HEAP_ALLOC@@W4_MM_ROTATE_DIRECTION@.c)
 *     ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4TVIDMM_ROTATE_FLAGS@@@Z @ 0x1400F5C14 (-Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6A.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::RecordRotation(
        struct _EPROCESS *a1,
        void *a2,
        __int64 a3,
        struct _MDL *a4,
        enum _MM_ROTATE_DIRECTION a5,
        int a6)
{
  __int64 v7; // rdx

  if ( VIDMM_GLOBAL::_RotationHistory )
  {
    v7 = 6LL
       * ((unsigned int)_InterlockedExchangeAdd((_DWORD *)&VIDMM_GLOBAL::_RotationHistory + 3, 1u)
        % *((_DWORD *)&VIDMM_GLOBAL::_RotationHistory + 2));
    *((_QWORD *)VIDMM_GLOBAL::_RotationHistory + v7) = a1;
    *((_QWORD *)VIDMM_GLOBAL::_RotationHistory + v7 + 1) = a2;
    *((_QWORD *)VIDMM_GLOBAL::_RotationHistory + v7 + 2) = a3;
    *((_DWORD *)VIDMM_GLOBAL::_RotationHistory + 2 * v7 + 6) = a5;
    *((_DWORD *)VIDMM_GLOBAL::_RotationHistory + 2 * v7 + 10) = a6;
    *((_QWORD *)VIDMM_GLOBAL::_RotationHistory + v7 + 4) = 0LL;
    if ( a4 )
      *((_QWORD *)VIDMM_GLOBAL::_RotationHistory + v7 + 4) = (__int64)a4[1].Next << 12;
  }
}
