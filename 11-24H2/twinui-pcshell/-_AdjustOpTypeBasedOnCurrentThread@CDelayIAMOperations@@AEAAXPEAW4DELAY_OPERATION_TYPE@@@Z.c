/*
 * XREFs of ?_AdjustOpTypeBasedOnCurrentThread@CDelayIAMOperations@@AEAAXPEAW4DELAY_OPERATION_TYPE@@@Z @ 0x1801FCBFC
 * Callers:
 *     CDelayIAMOperations::AddOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___ @ 0x1802966A0 (CDelayIAMOperations--AddOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___.c)
 *     CDelayIAMOperations::AddOperation__lambda_20045b0b3bc9a0c8c612018082f6611c___ @ 0x1802E177C (CDelayIAMOperations--AddOperation__lambda_20045b0b3bc9a0c8c612018082f6611c___.c)
 *     CDelayIAMOperations::AddOperation__lambda_2cec81e5a08c64ba5d30bf166a2a5e31___ @ 0x1802E18F0 (CDelayIAMOperations--AddOperation__lambda_2cec81e5a08c64ba5d30bf166a2a5e31___.c)
 *     CDelayIAMOperations::AddOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___ @ 0x1802E1A90 (CDelayIAMOperations--AddOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___.c)
 *     CDelayIAMOperations::AddOperation__lambda_e4f903151686668c7d98589c7fa057c5___ @ 0x1802E1C04 (CDelayIAMOperations--AddOperation__lambda_e4f903151686668c7d98589c7fa057c5___.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDelayIAMOperations::_AdjustOpTypeBasedOnCurrentThread(
        CDelayIAMOperations *this,
        enum DELAY_OPERATION_TYPE *a2)
{
  if ( *(_DWORD *)a2 == 4 )
    *(_DWORD *)a2 = (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 80LL))(*((_QWORD *)this + 1)) != 0
                  ? 1
                  : 3;
}
